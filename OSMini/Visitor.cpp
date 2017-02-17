#include "Visitor.h"

#include "CommandLineInterpreter.h"

#include <iostream>
#include <windows.h>

using namespace std;

Visitor::Visitor(CommandLineInterpreter* cli) : cli(cli)
{
}

Visitor::~Visitor()
{
}

template<typename T>
bool instanceOf(tree::ParseTree* ctx) {
	return dynamic_cast<T*>(ctx);
}

antlrcpp::Any Visitor::visitRedir(cliParserParser::RedirContext *ctx) {
	if (ctx->RED()) {
		return antlrcpp::Any(">");
	}
	else {
		return antlrcpp::Any(">>");
	}
}

antlrcpp::Any Visitor::visitCommand(cliParserParser::CommandContext *ctx) {
	// Should redirect
	bool redirect = (ctx->RED() || ctx->REDD());
	bool append = (ctx->REDD());

	// Nasty hack to make varid work for redirection
	size_t numVarid = ctx->varid().size();
	size_t currentNumVarid = 1;
	string redirectPath;
	string redirOutput;

	// Visit arguments
	vector<string> args;
	for (tree::ParseTree* child : ctx->children) {
		if (instanceOf<cliParserParser::VaridContext>(child)) {
			if (currentNumVarid >= numVarid && redirect) {
				// This is the last varid and there is a redirect so we will use it as the path
				redirectPath = visitVarid((cliParserParser::VaridContext*)child).as<string>();
				break;
			}
			
			string varId = visitVarid((cliParserParser::VaridContext*)child);
			antlrcpp::Any any = cli->getVariable(varId);

			if (any.is<string>()) {
				args.push_back(any);
			}
			else if (any.is<int>()) {
				args.push_back(to_string((int)any));
			}
			else if (any.is<bool>()) {
				args.push_back(to_string((bool)any));
			}

			currentNumVarid++;
		}
		else if (instanceOf<cliParserParser::ExprMContext>(child)) {
			int value = visitExprM((cliParserParser::ExprMContext*)child);
			args.push_back(to_string(value));
		}
		else if (instanceOf<cliParserParser::StatContext>(child)) {
			antlrcpp::Any any = visitStat((cliParserParser::StatContext*)child);

			if (any.is<string>()) {
				args.push_back(any);
			}
			else if (any.is<int>()) {
				args.push_back(to_string((int)any));
			}
			else if (any.is<bool>()) {
				args.push_back(to_string((bool)any));
			}
		}
	}
	
	// Check if internal command
	if (ctx->ECHO()) { //user is running echo command
		redirOutput = cli->executeCommand("echo", args, redirect);
	}
	else { 
		//user is trying to run an executable
		string expression = visitString(ctx->string());
		expression = expression.substr(1, expression.length() - 2);
		expression.append(".exe");

		// Try to run as included executable
		STARTUPINFO info = { sizeof(info) };
		PROCESS_INFORMATION processInfo;
		BOOL success = FALSE;
		string included(cli->getPath());
		included.append("\\");
		included.append(expression);


		if (ctx->BACKGrnd()) {
			//run command in background
			success = CreateProcess(NULL, const_cast<char *>(included.c_str()), NULL, NULL, TRUE, CREATE_NEW_CONSOLE, NULL, NULL, &info, &processInfo);
		}
		else {
			//run command in foreground
			success = CreateProcess(NULL, const_cast<char *>(included.c_str()), NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, NULL, &info, &processInfo);
			if (success)
			{
				WaitForSingleObject(processInfo.hProcess, INFINITE);
				CloseHandle(processInfo.hProcess);
				CloseHandle(processInfo.hThread);
			}
		}

		// If I did not find anything in the included path then treat as external executable
		if (!success) {
			info = { sizeof(info) };
			processInfo = PROCESS_INFORMATION();

			if (ctx->BACKGrnd()) {
				//run command in background
				success = CreateProcess(NULL, const_cast<char *>(expression.c_str()), NULL, NULL, TRUE, CREATE_NEW_CONSOLE, NULL, NULL, &info, &processInfo);
			}
			else {
				//run command in foreground
				success = CreateProcess(NULL, const_cast<char *>(expression.c_str()), NULL, NULL, TRUE, NORMAL_PRIORITY_CLASS, NULL, NULL, &info, &processInfo);
				if (success)
				{
					WaitForSingleObject(processInfo.hProcess, INFINITE);
					CloseHandle(processInfo.hProcess);
					CloseHandle(processInfo.hThread);
				}
			}
		}

		if (!success) {
			cout << "Failed to execute command " << expression << endl;
		}
	}

	if (redirect) {
		cli->outputToFile(redirectPath, redirOutput, append);
	}

	return antlrcpp::Any();
}

antlrcpp::Any Visitor::visitVarid(cliParserParser::VaridContext *ctx) {
	return ctx->getText();
}

antlrcpp::Any Visitor::visitAssgnmnt(cliParserParser::AssgnmntContext *ctx) {
	if (ctx->getText().find(":=") >= 1) {
		string varId = visitVarid(ctx->varid());
		antlrcpp::Any stat = visitStat(ctx->stat());

		cli->addVariable(varId, stat);
	}

	return antlrcpp::Any();
}

antlrcpp::Any Visitor::visitLogicops(cliParserParser::LogicopsContext *ctx) {
	// Assume it is an AND
	char op = 'a';

	// If OR() does not return null then it was actually an OR
	if (ctx->OR()) {
		op = 'o';
	}

	return op;
}

antlrcpp::Any Visitor::visitExprM(cliParserParser::ExprMContext *ctx) {
	string expression = ctx->getText();
	int termIndex = 1;
	int sum = visitTerm(ctx->term(0));


	for (int i = 0; i < expression.length(); i++) {
		char character = expression[i];
		switch (character) {
		case '+':
			sum += (int)visitTerm(ctx->term(termIndex++));
			break;
		case '-':
			sum -= (int)visitTerm(ctx->term(termIndex++));
			break;
		default:
			break;
		}
	}

	return sum;
}

antlrcpp::Any Visitor::visitTerm(cliParserParser::TermContext *ctx) {
	string expression = ctx->getText();
	int factorIndex = 1;
	int product = visitFactor(ctx->factor(0));

	for (int i = 0; i < expression.length(); i++) {
		char character = expression[i];
		switch (character) {
		case '*':
			product *= (int)visitFactor(ctx->factor(factorIndex++));
			break;
		case '/':
			product /= (int)visitFactor(ctx->factor(factorIndex++));
			break;
		default:
			break;
		}
	}

	return product;
}

antlrcpp::Any Visitor::visitFactor(cliParserParser::FactorContext *ctx) {
	string expression = ctx->NUMBER()->getText();
	bool isNumber = true;
	for (int i = 0; i < expression.length(); i++) {
		if (!isdigit(expression[i])) {
			isNumber = false;
		}
	}
	if (isNumber) {
		int value = stoi(ctx->NUMBER()->getText());
		return antlrcpp::Any(value);
	}
	return visitChildren(ctx);
}


antlrcpp::Any Visitor::visitString(cliParserParser::StringContext *ctx) {
	string value = ctx->getText();
	return value;
}

antlrcpp::Any Visitor::visitComparS(cliParserParser::ComparSContext *ctx) {
	string expr1 = visitString(ctx->string(0));
	string expr2 = visitString(ctx->string(1));

	if (expr1 == expr2) {
		return true;
	}
	else {
		return false;
	}
}

antlrcpp::Any Visitor::visitComparM(cliParserParser::ComparMContext *ctx) {
	int expr1 = visitExprM(ctx->exprM(0));
	int expr2 = visitExprM(ctx->exprM(1));

	if (expr1 == expr2) {
		return true;
	}
	else {
		return false;
	}
}

antlrcpp::Any Visitor::visitCompar(cliParserParser::ComparContext *ctx) {
	int doublequotes = 0;
	string expression = ctx->getText();
	for (int i = 0; i < expression.length(); i++) {
		char currentchar = expression[i];
		if (currentchar == '"') {
			doublequotes++;
		}
	}

	if (doublequotes % 2 == 0 && doublequotes > 3) {
		return visitComparS(ctx->comparS());
	}
	else if(doublequotes == 0) {
		return visitComparM(ctx->comparM());
	}
}

antlrcpp::Any Visitor::visitStat(cliParserParser::StatContext *ctx) {
	if (ctx->ifstat()) {
		return visitIfstat(ctx->ifstat());
	}
	else if (ctx->whilestat()) {
		return visitWhilestat(ctx->whilestat());
	}
	else if (ctx->assgnmnt()) {
		return visitAssgnmnt(ctx->assgnmnt());
	}
	else if (ctx->compar().size() > 0) {
		bool value = (bool)visitCompar(ctx->compar(0));
		for (int i = 0; i < ctx->logicops().size(); i++) {
			char logicop = (char)visitLogicops(ctx->logicops(i++));
			switch (logicop) {
			case 'a':
				value = value && (bool)visitCompar(ctx->compar(i++));
			case 'o':
				value = value || (bool)visitCompar(ctx->compar(i++));
			}
		}
		return value;
	}
	else if (ctx->exprM()) {
		return visitExprM(ctx->exprM());
	}	
	else if (ctx->command()) {
		return visitCommand(ctx->command());
	}
	else {
		return visitChildren(ctx);
	}
}

antlrcpp::Any Visitor::visitBlockstat(cliParserParser::BlockstatContext *ctx) {
	for (int i = 0; i < ctx->stat().size(); i++) {
		visitStat(ctx->stat(i));
	}
	return antlrcpp::Any();
}


antlrcpp::Any Visitor::visitIfstat(cliParserParser::IfstatContext *ctx) {
	bool value = (bool)visitCompar(ctx->compar(0));
	for (int i = 0; i < ctx->logicops().size(); i++) {
		char logicop = (char)visitLogicops(ctx->logicops(i++));
		switch (logicop) {
			case 'a':
				value = value && (bool)visitCompar(ctx->compar(i++));
			case 'o':
				value = value || (bool)visitCompar(ctx->compar(i++));
		}
	}
	if (value) {
		return visitBlockstat(ctx->blockstat(0));
	}
	else {
		return visitBlockstat(ctx->blockstat(1));
	}
}

antlrcpp::Any Visitor::visitWhilestat(cliParserParser::WhilestatContext *ctx) {
	bool value = visitCompar(ctx->compar(0));
	for (int i = 0; i < (int)ctx->logicops().size(); i++) {
		char logicop = visitLogicops(ctx->logicops(i++));
		switch (logicop) {
		case 'a':
			value = value && (bool)visitCompar(ctx->compar(i++));
		case 'o':
			value = value || (bool)visitCompar(ctx->compar(i++));
		}
	}
	while (value) {
		visitBlockstat(ctx->blockstat());
	}
	return visitChildren(ctx);
}

antlrcpp::Any Visitor::visitBool_(cliParserParser::Bool_Context *ctx) {
	string expression = ctx->getText();
	if (expression == "TRUE") {
		return true;
	}
	else if (expression == "FALSE") {
		return false;
	}
}

#include "CommandLineInterpreter.h"

#include <iostream>

#include "cliParserLexer.h"
#include "cliParserParser.h"

#include "Visitor.h"

#include "Commands.h"

#include <windows.h>

using namespace std;

CommandLineInterpreter::CommandLineInterpreter() : closed(false)
{
	const DWORD bufferSize = 512;
	TCHAR buffer[bufferSize];

	GetCurrentDirectory(bufferSize, buffer);

	currentDirectory = string(buffer);

	// Map commands
	cmds["echo"] = &echo;
}


CommandLineInterpreter::~CommandLineInterpreter()
{
}

int CommandLineInterpreter::run() {

	cout << "OSMini by Simon Bourque and Gabriel Belanger" << endl << endl;

	while (!closed) {
		cout << currentDirectory << ">";
		
		string input;
		getline(cin, input);

		// Temp exit
		if (input == "exit") {
			break;
		}

		ANTLRInputStream stream(input);
		cliParserLexer lexer(&stream);
		CommonTokenStream tokens(&lexer);
		cliParserParser parser(&tokens);

		//Ref<tree::ParseTree> tree = Ref<tree::ParseTree>(parser.blockstat());
		tree::ParseTree* tree = parser.blockstat();

		Visitor visitor(this);

		antlrcpp::Any finalResult = visitor.visit(tree);

		if (finalResult.isNotNull() && finalResult.is<int>()) {
			cout << ((int)finalResult) << endl;
		}

	}

	return 0;
}

void CommandLineInterpreter::close() {
	closed = true;
}

void CommandLineInterpreter::addVariable(const std::string& varId, antlrcpp::Any value) {
	variables[varId] = value;
}

antlrcpp::Any CommandLineInterpreter::getVariable(std::string& varId) const {
	map<string,antlrcpp::Any>::const_iterator iter = variables.find(varId);
	if (iter == variables.end()) {
		cout << "Variable " << varId << " does not exist!" << endl;
		return antlrcpp::Any();
	}
	else {
		return variables.at(varId);
	}
}

int CommandLineInterpreter::executeCommand(const std::string& cmd, const vector<std::string>& args) {
	return cmds.at(cmd)(args);
}

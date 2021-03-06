#include "CommandLineInterpreter.h"

#include <iostream>

#include "cliParserLexer.h"
#include "cliParserParser.h"

#include "Visitor.h"

#include "Commands.h"

#include <fstream>
#include <windows.h>

using namespace std;

CommandLineInterpreter::CommandLineInterpreter() : closed(false)
{
	// Get working directory
	const DWORD bufferSize = 512;
	TCHAR buffer[bufferSize];

	GetCurrentDirectory(bufferSize, buffer);

	currentDirectory = string(buffer);

	// Get simulated path folder
	path = string(currentDirectory);
	path.append("\\path");
	
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
		
		// Get input from the user
		string input;
		getline(cin, input);

		// handle exit
		if (input == "exit") {
			break;
		}

		// Handle empty string
		if (input.empty()) {
			continue;
		}

		// Parse input
		ANTLRInputStream stream(input);
		cliParserLexer lexer(&stream);
		CommonTokenStream tokens(&lexer);
		cliParserParser parser(&tokens);

		tree::ParseTree* tree = parser.blockstat();

		Visitor visitor(this);

		// Visit top of parse tree
		visitor.visit(tree);

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
	
	// Check if variable actually exists in our map
	if (iter == variables.end()) {
		cout << "Variable " << varId << " does not exist!" << endl;
		return antlrcpp::Any();
	}
	else {
		return variables.at(varId);
	}
}

string CommandLineInterpreter::executeCommand(const string& cmd, const vector<string>& args, bool redirected) {
	return cmds.at(cmd)(args, redirected);
}

void CommandLineInterpreter::outputToFile(const string& filePath, const string& output, bool append) const {

	ofstream ofs;

	if (append) {
		ofs.open(filePath, std::ofstream::out | std::ofstream::app);
	}
	else {
		ofs.open(filePath);
	}

	if (ofs) {
		ofs << output;
	}
	else {
		cout << "Failed redirect output to file " << filePath << endl;
	}

	ofs.close();
}

std::string CommandLineInterpreter::getPath() const {
	return path;
}

#include "CommandLineInterpreter.h"

#include <iostream>

#include "cliParserLexer.h"
#include "cliParserParser.h"
#include "antlr4-runtime.h"

#include "Visitor.h"

#include <windows.h>

using namespace std;

CommandLineInterpreter::CommandLineInterpreter() : closed(false)
{
	const DWORD bufferSize = 512;
	TCHAR buffer[bufferSize];

	GetCurrentDirectory(bufferSize, buffer);

	currentDirectory = string(buffer);

}


CommandLineInterpreter::~CommandLineInterpreter()
{
}

int CommandLineInterpreter::run() {

	cout << "OSMini by Simon Bourque and Gabriel Belanger" << endl << endl;

	Visitor visitor(this);

	while (!closed) {
		cout << currentDirectory << ">";
		
		string input;
		getline(cin, input);

		cout << "INPUT STRING WAS: " << input << endl;

		ANTLRInputStream stream(input);
		cliParserLexer lexer(&stream);
		CommonTokenStream tokens(&lexer);
		cliParserParser parser(&tokens);

		Ref<tree::ParseTree> tree = Ref<tree::ParseTree>(parser.blockstat());
		visitor.visit(tree.get());

		// Temp exit
		if (input == "exit") {
			break;
		}
	}

	return 0;
}

void CommandLineInterpreter::close() {
	closed = true;
}

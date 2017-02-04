#include "CommandLineInterpreter.h"

#include <iostream>

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

	while (!closed) {
		cout << currentDirectory << ">";
		
		string input;
		cin >> input;

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

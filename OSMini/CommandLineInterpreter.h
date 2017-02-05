#ifndef COMMANDLINEINTERPRETER_H
#define COMMANDLINEINTERPRETER_H

#include <string>

typedef class CommandLineInterpreter CLI;

class CommandLineInterpreter
{
private:
	bool closed;
	std::string currentDirectory;
public:
	CommandLineInterpreter();
	~CommandLineInterpreter();

	int run();
	void close();
};
#endif


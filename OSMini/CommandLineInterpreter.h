#ifndef COMMANDLINEINTERPRETER_H
#define COMMANDLINEINTERPRETER_H

#include <string>
#include <map>
#include <vector>

#include "antlr4-runtime.h"

typedef class CommandLineInterpreter CLI;

class CommandLineInterpreter
{
private:
	bool closed;
	std::string currentDirectory;
	std::map<std::string, antlrcpp::Any> variables;
	std::map<std::string, int(*)(const std::vector<std::string>& args)> cmds;
public:
	CommandLineInterpreter();
	~CommandLineInterpreter();

	int run();
	void close();

	void addVariable(const std::string& varId, antlrcpp::Any value);
	antlrcpp::Any getVariable(std::string& varId) const;
	
	int executeCommand(const std::string& cmd, const std::vector<std::string>& args);
};
#endif


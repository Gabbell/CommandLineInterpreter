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
	std::string path;
	std::map<std::string, antlrcpp::Any> variables;
	std::map<std::string, std::string(*)(const std::vector<std::string>& args, bool redirected)> cmds;
public:
	CommandLineInterpreter();
	~CommandLineInterpreter();

	std::string getPath() const;

	int run();
	void close();

	void addVariable(const std::string& varId, antlrcpp::Any value);
	antlrcpp::Any getVariable(std::string& varId) const;
	
	std::string executeCommand(const std::string& cmd, const std::vector<std::string>& args, bool redirected);

	void outputToFile(const std::string& filePath, const std::string& output, bool append) const;
};
#endif


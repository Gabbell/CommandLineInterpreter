#ifndef COMMANDS_H
#define COMMANDS_H

#include <vector>
#include <string>

// H file containing the prototypes for all the internal commands
// Include this file if you wish to use any of these functions

std::string echo(const std::vector<std::string>& args, bool redirected);

#endif
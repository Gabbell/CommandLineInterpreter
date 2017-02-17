
#include "Commands.h"
#include <iostream>
#include <sstream>

using namespace std;

string echo(const vector<string>& args, bool redirected) {
	if (redirected) {
		stringstream ss;
		for (string arg : args) {
			ss << arg << endl;
		}
		return ss.str();
	}
	else {
		for (string arg : args) {
			cout << arg << endl;
		}
		return string();
	}
}
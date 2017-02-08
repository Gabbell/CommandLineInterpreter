
#include "Commands.h"
#include <iostream>

using namespace std;

int echo(const vector<string>& args) {
	for (string arg : args) {
		cout << arg << endl;
	}
	return 0;
}
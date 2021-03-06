# Command Line Interpreter
COEN346 - Operating Systems - Assignment 1 - Command Line Interpreter

A command line interpreter using a Antlr4 parser generated by a given grammar file.

Since the parser and lexer were already generated using the given grammar file, this assignment
was about implementing either the “visitor” or the “listener” method of interpretation of the
parsing tree. We chose the visitor method in a C++ environment. This method consists of a sort
of iterator that visits every node of the tree and returns an adequate value when it leaves the node
to visit the children of that node. The root of the tree is a Blockstat. The final program has all the
requested features although we did run into some obstacles concerning the given grammar file:

* A while loop will always be false or true because the compar on which the boolean expression is based will never change. 
* An executable has to be executed using a string which means that you have to put double quotes around the name of the executable.    This is not how classic CLIs work. 
* Usually a user should be able to run an executable without arguments but the grammar file specifies that you need at least one. This makes it so that we have to put a dummy argument every time we want to run an executable. 
* Strings and varIds cannot have slashes or periods which means that we cannot directly input file paths or extensions.
* The assignment operator does not work with strings so we cannot store strings in variables.
* The order of the arguments cannot be maintained for commands without nasty hacks. There would need to be an “args” rule that includes varIds, exprMs and stats.


grammar cliParser;
options{
	//backtrack =true;
	//output=AST;
	//ASTLabelType=CommonTree;
	//language =Cpp;
}
//tokens {
    PLUS    : '+' ;
    MINUS   : '-' ;
    MULT    : '*' ;
    DIV : '/' ;
    RED : '->';
    REDD : '->>';
    BACKGrnd : '&';
    AND : 'and';
    OR : 'or';
    WHILE : 'while';
    IF : 'if';
    TRUE : 'TRUE';
    FALSE : 'FALSE';
    ELSE : 'else';
    EQ : '==';
    ASSGNMNT : ':=';
    ECHO : 'echo';
    OBRACE : '{';
    CBRACE : '}';
//}
NUMBER  : (DIGIT)+ ;
 
WHITESPACE : ( '\t' | ' ' | '\r' | '\n'| '\u000C' )+ -> skip;
 
fragment DIGIT  : '0'..'9' ;
fragment LETTERU 
	:	'A'..'Z';
fragment LETTERL 
	:	'a'..'z';

LETTER 	:	LETTERU | LETTERL;
string 	:	'"' (LETTER | NUMBER | WHITESPACE)+ '"' ;
exprM    : term ( ( PLUS | MINUS )  term )* ;
varid	:	(LETTER)+;
term    : factor ( ( MULT | DIV ) factor )* ;
 
factor  : NUMBER ;
bool_ 	:	 TRUE | FALSE;
comparM :	 exprM EQ exprM;
comparS :	string EQ string;
compar 	:	comparS | comparM;
logicops 
	:	 AND | OR;
//logicOp :	compar (logicops (compar | bool))*;
assgnmnt : varid ASSGNMNT stat;
redir   :	 RED | REDD;
backgrnd :	 BACKGrnd;
command : (ECHO | string) (varid | exprM | stat)+ ((RED | REDD) varid)? BACKGrnd?  ;
ifstat 	: IF compar (logicops compar)* OBRACE blockstat CBRACE (ELSE OBRACE blockstat CBRACE)? ;
whilestat :	WHILE compar (logicops compar)* OBRACE blockstat CBRACE;
stat 	:	ifstat | whilestat | assgnmnt | compar (logicops compar)* | exprM | command | ';';
blockstat :	 (stat)+;

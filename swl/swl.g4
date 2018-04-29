grammar swl;

program   :  codeblock ;

codeblock : 'begin' statement+ 'end';
          
statement : assign | add | mul | div | print | ifcond | whileloop ;

assign    : 'let' ID 'be' (NUMBER | ID) ;
print     : 'print' (NUMBER | ID) ;
add       : 'add' (NUMBER | ID) 'to' ID ;
mul       : 'mul' ID 'by' (NUMBER | ID) ;
div       : 'div' ID 'by' (NUMBER | ID) ;
ifcond	  : 'if' fullcond 'then' codeblock ('else' program)? ;
whileloop : 'while' fullcond 'do' codeblock ;

condition : (ID|NUMBER) (lt|mt|le|me|eq|di) (ID|NUMBER) ;
multicond : (notS)* condition ((andS|orS) (notS)* condition)* ;
parcond   : (notS)* ( multicond | op multicond cp ) ;
fullcond  : parcond ( (andS|orS) parcond )* ;

andS       : 'and' ;
orS        : 'or' ;
notS       : 'not' ;

op        : '(' ;
cp        : ')' ;

lt        : '<' ;
mt        : '>' ;
le        : '<=' ;
me        : '>=' ;
eq        : '==' ;
di        : '=/=' ;


ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
WS        : [ \n\t]+ -> skip;
ErrorChar : . ;

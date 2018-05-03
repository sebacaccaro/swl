grammar swl;

program   :  codeblock ;

codeblock : 'begin' statement+ 'end';
          
statement : assign | add | mul | div | print | ifcond | whileloop ;

assign    : 'let' ID 'be' (NUMBER | ID) ;
print     : 'print' (NUMBER | ID) ;
add       : 'add' (NUMBER | ID) 'to' ID ;
mul       : 'mul' ID 'by' (NUMBER | ID) ;
div       : 'div' ID 'by' (NUMBER | ID) ;
ifcond	  : 'if' fullcond 'then' codeblock (elsecond)? ;
elsecond  : 'else' codeblock ;
whileloop : 'while' fullcond 'do' codeblock ;

c1        : (ID) (lt|mt|le|me|eq|di) (ID|NUMBER) ;
c2        : (NUMBER) (lt|mt|le|me|eq|di) (ID|NUMBER) ;

multicond : (notS)* ( c1 | c2 ) ((andS|orS) (notS)* ( c1 | c2 ))* ;
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

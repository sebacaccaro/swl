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

condition : (ID|NUMBER) ('<'|'>'|'<='|'>='|'=='|'=/=') (ID|NUMBER) ;
multicond : ('not')* condition (('and'|'or') ('not')* condition)* ;
parcond   : ('not')* ( multicond | '(' multicond ')' ) ;
fullcond  : parcond ( ('and'|'or') parcond )* ;

ID        : [a-z]+ ;
NUMBER    : [0-9]+ ;
WS        : [ \n\t]+ -> skip;
ErrorChar : . ;

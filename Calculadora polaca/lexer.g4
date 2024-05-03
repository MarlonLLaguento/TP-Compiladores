lexer grammar Lexer;

MUL: '*';
DIV: '/';
SUM: '+';
RES: '-';

NUM : [\-]?[0-9]+ ;
WS: [ \t\n\r\f]+ -> skip ;
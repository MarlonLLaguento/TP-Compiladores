parser grammar Parser;

program: exp EOF;

exp
    :NUM
    | exp exp ('*'|'/')
    | exp exp ('+' | '-')
    ;
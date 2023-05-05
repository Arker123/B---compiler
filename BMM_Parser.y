%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yylineno;
extern char *yytext;

void yyerror(const char *msg);
%}

%token INTEGER VAR STRING LET INPUT PRINT IF THEN ELSE FOR TO STEP NEXT 
%token END LPAREN RPAREN EQ NEQ GT GTE LT LTE PLUS MINUS TIMES DIVIDE MODULO FLOAT DOUBLE STRING_TYPE

%left '+' '-'
%left '*' '/'
%left UMINUS

%start program

%%

program: statement_list END
    ;

statement_list: statement
              | statement_list statement
              ;

statement: input_statement
         | print_statement
         | let_statement
         | if_statement
         | for_statement
         ;

input_statement: INPUT VAR {  /* code to handle input statement */ }
               ;

print_statement: PRINT expr { printf("%s\n", $2); /* code to handle print statement */ }
               ;

let_statement: LET VAR EQ expr { /* code to handle let statement */ }
             ;

if_statement: IF expr THEN statement_list else_if_list else_part END IF
            ;

else_if_list: /* empty */
            | else_if_list ELSEIF expr THEN statement_list
            ;

else_part: /* empty */
         | ELSE statement_list
         ;

for_statement: FOR VAR EQ expr TO expr step_clause statement_list NEXT VAR
             ;

step_clause: /* empty */
           | STEP expr
           ;

expr: INTEGER
    | FLOAT
    | DOUBLE
    | STRING { $$ = $1; }
    | VAR
    | LPAREN expr RPAREN
    | expr PLUS expr { $$ = $1 + $3; }
    | expr MINUS expr { $$ = $1 - $3; }
    | expr TIMES expr { $$ = $1 * $3; }
    | expr DIVIDE expr { $$ = $1 / $3; }
    | expr MODULO expr { $$ = $1 % $3; }
    | expr NEQ expr { $$ = $1 != $3; }
    | expr GT expr { $$ = $1 > $3; }
    | expr GTE expr { $$ = $1 >= $3; }
    | expr LT expr { $$ = $1 < $3; }
    | expr LTE expr { $$ = $1 <= $3; }
    | MINUS expr %prec UMINUS { $$ = -$2; }
    ;

%%

void yyerror(const char *msg) {
    printf("Error: %s at line %d: %s\n", msg, yylineno, yytext);
}

int main() {
    yyparse();
    return 0;
}
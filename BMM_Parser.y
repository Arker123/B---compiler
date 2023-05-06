%{

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    // #include"lex.yy.c"
    
    void yyerror(const char *s);
    extern int yylex();
    extern int yylineno;
    extern char *yytext;
%}

%token ID PRINT LET END
%token VAR NUM

%left '+' '-'
%left '*' '/'

%start program

%%

program: statement_list
    ;

statement_list: statement
              | statement_list statement
              ;

statement: print_statement
         | let_statement
         | end_statement
         ;

let_statement: ID LET declaration
             ;

print_statement: ID PRINT declaration
               ;

end_statement: END {printf("ENDD\n");return 0;}

declaration: expr'='expr
            | expr'<''='expr
            | expr'>''='expr
            | expr'<'expr
            | expr'>'expr
            | expr'<''>'expr
            | expr
            ;

expr: VAR {printf("Variable\n");}
    | NUM {printf("Number\n");}

    | expr '+' expr {printf("Addition\n");}
    | expr '-' expr {printf("Subtraction\n");}
    | expr '*' expr {printf("Multiplication\n");}
    | expr '/' expr {printf("Division\n");}

    | '(' expr ')' {printf("Parenthesis\n");}
    | '[' expr ']' {printf("Brackets\n");}
    | '{' expr '}' {printf("Braces\n");}
    ;



%%

void yyerror(const char *msg) {
    printf("Error: %s at line %d: %s\n", msg, yylineno, yytext);
}

int main() {
    yyparse();
    return 0;
}
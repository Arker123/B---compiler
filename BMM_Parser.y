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
%token DATA FLOAT STRING
%token DIM DIMDATA
%token GOTO GOTOID
%token GOSUB GOSUBID


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
         | data_statement
         | dim_statement
         | goto_statement
         | gosub_statement
         ;

let_statement: ID LET declaration
             ;

print_statement: ID PRINT declaration
               ;

data_statement: ID DATA data_declaration
              ;

dim_statement: ID DIM dim_declaration
             ;

goto_statement: ID GOTO GOTOID {printf("GOTOO\n");}
              ;

gosub_statement: ID GOSUB GOSUBID {printf("GOSUBB\n");}
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

data_declaration: data_expr
                 | data_declaration data_expr
                 ;
data_expr: STRING {printf("String\n");}
         | FLOAT {printf("Float\n");}
         ;

dim_declaration: dim_expr
                | dim_declaration dim_expr
                ;
dim_expr: DIMDATA {printf("DIM Data\n");}
        ;

%%

void yyerror(const char *msg) {
    printf("Error: %s at line %d: %s\n", msg, yylineno, yytext);
}

int main() {
    yyparse();
    return 0;
}
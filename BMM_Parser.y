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
%token STOP RETURN
%token IF THEN IFNUM IFVAR
%token INPUT INPUTTOKEN
%token REM


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
         | stop_statement
         | return_statement
         | if_statement
         | input_statement
         | rem_statement
         ;

rem_statement: ID REM {printf("REMM\n");}
             ;


let_statement: ID LET declaration
             ;

print_statement: ID PRINT declaration
               ;

input_statement: ID INPUT input_declaration
               ;

data_statement: ID DATA data_declaration
              ;

dim_statement: ID DIM dim_declaration
             ;

goto_statement: ID GOTO GOTOID {printf("GOTOO\n");}
              ;

gosub_statement: ID GOSUB GOSUBID {printf("GOSUBB\n");}
               ;

if_statement: ID IF if_declaration THEN IFNUM

stop_statement: ID STOP {printf("STOPP\n");}
                ;

return_statement: ID RETURN {printf("RETURNN\n");}
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

if_declaration: if_expr'='if_expr
                | if_expr'<''='if_expr
                | if_expr'>''='if_expr
                | if_expr'<'if_expr
                | if_expr'>'if_expr
                | if_expr'<''>'if_expr
                | if_expr
                ; 

if_expr: IFVAR {printf("Variable\n");}
         | IFNUM {printf("Number\n");}
    
         | if_expr '+' if_expr {printf("Addition\n");}
         | if_expr '-' if_expr {printf("Subtraction\n");}
         | if_expr '*' if_expr {printf("Multiplication\n");}
         | if_expr '/' if_expr {printf("Division\n");}
    
         | '(' if_expr ')' {printf("Parenthesis\n");}
         | '[' if_expr ']' {printf("Brackets\n");}
         | '{' if_expr '}' {printf("Braces\n");}
         ;

input_declaration: input_expr
                 | input_declaration input_expr
                 ;

input_expr: INPUTTOKEN {printf("Input\n");}

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
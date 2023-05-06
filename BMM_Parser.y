%{

    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    #include<ctype.h>
    // #include"lex.yy.c"
    void yyerror(const char *s);
    extern int yylex();
    extern int yylineno;
    extern FILE* yyin;
    extern char *yytext;
%}

%token ID PRINT LET END
%token NOT OR XOR AND VAR NUM
%token DATA FLOAT STRING
%token DIM DIMDATA
%token GOTO GOTOID
%token GOSUB GOSUBID RETURN
%token STOP
%token IF THEN IFNUM IFVAR
%token INPUT INPUTTOKEN
%token REM
%token FOR NEXT TO STEP
%token DEF FN


%left '+' '-'
%left '*' '/'
%left NOT AND OR XOR

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
         | if_statement
         | input_statement
         | rem_statement
         | for_statement
         | def_statement
         ;

def_statement: ID DEF def_declaration
             ;

rem_statement: ID REM {printf("REMM\n");}
             ;

for_statement: ID FOR for_declaration statement_list for_next
            | ID FOR for_declaration for_next
             ;

for_next: ID NEXT VAR
            ;

let_statement: ID LET declaration
             ;

print_statement: ID PRINT print_declaration 
               | ID PRINT
               ;

input_statement: ID INPUT input_declaration
               ;

data_statement: ID DATA data_declaration
              ;

dim_statement: ID DIM dim_declaration
             ;

goto_statement: ID GOTO GOTOID {printf("GOTOO\n");}
              ;

gosub_statement: ID GOSUB GOSUBID statement_list return_statement {printf("GOSUBB\n");}
                | ID GOSUB GOSUBID return_statement {printf("GOSUBB without statements\n");}
               ;

if_statement: ID IF if_declaration THEN IFNUM

stop_statement: ID STOP {printf("STOPP\n");}
                ;

return_statement: ID RETURN {printf("RETURNN\n");}
                 ;

end_statement: ID END {printf("ENDD\n");}

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
    
    | NOT expr {printf("NOT\n");}
    | expr AND expr {printf("AND\n");}
    | expr OR expr {printf("OR\n");}
    | expr XOR expr {printf("XOR\n");}

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

         | NOT if_expr {printf("NOT\n");}
         | if_expr AND if_expr {printf("AND\n");}
         | if_expr OR if_expr {printf("OR\n");}
         | if_expr XOR if_expr {printf("XOR\n");}
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

for_declaration: VAR '=' expr TO expr
                | VAR '=' expr TO expr STEP expr
                ;

def_declaration: FN '=' expr
            | FN '(' VAR ')' '=' expr 


print_declaration: print_expr
                  | print_declaration ';' 
                  | print_declaration ',' print_expr
                  | print_declaration ';' print_expr
                  ;

print_expr: declaration
            | STRING {printf("String\n");}
          ;

%%

void yyerror(const char *msg) {
    printf("Error: %s at line %d: %s\n", msg, yylineno, yytext);
}

int main() {
    yyin = fopen("./test.bmm", "r");
    yyparse();
    fclose(yyin);
    return 0;
}
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
    extern FILE* yyout;
    extern char *yytext;
%}

%token ID PRINT LET END
%token NOT OR XOR AND VAR NUM
%token DATA FLOAT STRING
%token DIM DIMDATA
%token GOTO GOTOID
%token GOSUB GOSUBID RETURN
%token STOP
%token IF THEN IFNUM IFVAR IFSTRINGVAR IFSTRING
%token INPUT INPUTTOKEN
%token REM
%token FOR NEXT TO STEP
%token DEF FN


%left '+' '-'
%left '*' '/'
%left NOT AND OR XOR
%right '^'

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

rem_statement: ID REM 
             ;

for_statement: ID FOR for_declaration statement_list for_next
            | ID FOR for_declaration for_next
             ;

for_next: ID NEXT VAR
            ;

let_statement: ID LET declaration
             ;

print_statement: ID PRINT print_declaration 
               ;

input_statement: ID INPUT input_declaration
               ;

data_statement: ID DATA data_declaration
              ;

dim_statement: ID DIM dim_declaration
             ;

goto_statement: ID GOTO GOTOID
              ;

gosub_statement: ID GOSUB GOSUBID statement_list return_statement
                | ID GOSUB GOSUBID return_statement 
               ;

if_statement: ID IF if_declaration THEN IFNUM

stop_statement: ID STOP 
                ;

return_statement: ID RETURN
                 ;

end_statement: ID END {}

declaration:  NOT expr2
            | expr2 AND expr2 
            | expr2 OR expr2 
            | expr2 XOR expr2
            | expr2 
            ;

expr2: expr'='expr 
        | expr'<''='expr 
        | expr'>''='expr 
        | expr'<'expr 
        | expr'>'expr 
        | expr'<''>'expr
        | expr
        ;
expr: VAR
    | NUM
    
    

    | expr '+' expr
    | expr '-' expr
    | expr '*' expr 
    | expr '/' expr 
    | expr '^' expr
    | '-' expr 

    | '(' expr ')'
    | '[' expr ']'
    | '{' expr '}'
    ;

if_declaration: if_expr'='if_expr
                | if_expr'<''='if_expr
                | if_expr'>''='if_expr
                | if_expr'<'if_expr
                | if_expr'>'if_expr
                | if_expr'<''>'if_expr
                | if_expr
                | IFSTRINGVAR '=' IFSTRING 
                | IFSTRINGVAR '<''>' IFSTRING
                | IFSTRING '=' IFSTRING 
                | IFSTRING '<''>' IFSTRING
                | IFSTRINGVAR '=' IFSTRINGVAR 
                | IFSTRINGVAR '<''>' IFSTRINGVAR
                | IFSTRING '=' IFSTRINGVAR 
                | IFSTRING '<''>' IFSTRINGVAR 
                ; 

if_expr: IFVAR 
         | IFNUM 
    
         | if_expr '+' if_expr
         | if_expr '-' if_expr
         | if_expr '*' if_expr
         | if_expr '/' if_expr
    
         | '(' if_expr ')'
         | '[' if_expr ']' 
         | '{' if_expr '}'

         | NOT if_expr
         | if_expr AND if_expr
         | if_expr OR if_expr 
         | if_expr XOR if_expr 
         ;

input_declaration: input_expr
                 | input_declaration input_expr
                 ;

input_expr: INPUTTOKEN

data_declaration: data_expr
                 | data_declaration data_expr
                 ;
data_expr: STRING
         | FLOAT
         ;

dim_declaration: dim_expr
                | dim_declaration dim_expr
                ;
dim_expr: DIMDATA
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
            | STRING 
            ;

%%

void yyerror(const char *msg) {
    printf("Error: %s at line %d: %s\n", msg, yylineno, yytext);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: ./a.out <filename>\n");
        exit(1);
    }
    yyin = fopen(argv[1], "r");
    yyout = fopen("output.txt", "w");
    yyparse();
    fclose(yyin);
    fclose(yyout);
    return 0;
}
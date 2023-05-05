%{

/* This is the C code for including header file and declaring Variables */

#include <stdio.h>
#include "y.tab.h"
extern int yylval;
void yyerror(const char* message);


int foo(long long yyleng, char *yytext);
void LETStatement(char* yytext, long long yyleng);
void PRINTStatement(char* yytext, long long yyleng);
%}

/* Remaining --> DATA?, DEF, DIM, FOR, GOTO, GOSUB, IF, INPUT */
/* REM -> 0*/
/* STOP -> 1*/
%%
^[0-9][0-9]{0,3}[\ ]+ {printf("Int\n");printf("\nYoo: %s\n", yytext); yylval=atoi(yytext); return ID;}
REM(.)*[^\n]*     {yylval = 1;return STATEMENT;}
STOP[^\n]*     {yylval = 2;return STATEMENT;}
END[^\n]*     {yylval = 3; return STATEMENT;}
RETURN[^\n]*     {yylval = 4; return STATEMENT;}
LET[\ ]+     {yylval = 5; return STATEMENT;}
[A-Z][0-9]?(%|!|#|$)?[^\n]*     {yylval = 6; return ID;}
(\n)*
%%

int foo(long long yyleng, char *yytext)
{
    printf("yyleng: %lld\n", yyleng);
    for (int i = 0; i < yyleng; i++)
    {
        printf("%c", yytext[i]);
    }
    return yyleng;
}

void LETStatement(char* yytext, long long yyleng)
{
    printf("LET statement found\n");
    // Parse LET Statement and return the token
    char* token = strtok(yytext, " ");
    char* variable = strtok(NULL, " ");
    char* operator = strtok(NULL, "=");
    char* operand = strtok(NULL, " ");
    printf("Token: %s\n", token);
    printf("Variable: %s\n", variable);
    printf("Operator: %s\n", operator);
    printf("Operand: %s\n", operand);

}

void PRINTStatement(char* yytext, long long yyleng)
{
    printf("PRINT statement found\n");
    // Parse PRINT Statement and return the token
    char* token = strtok(yytext, " ");
    char* variable = strtok(NULL, " ");
    char* operator = strtok(NULL, " ");
    printf("Token: %s\n", token);
    printf("Variable: %s\n", variable);
    printf("Operator: %s\n", operator);
}

int yywrap()
{
    return 1;
}

// int main()
// {
//     while(1)
//     {
//         printf("%d", yylex());
//     }
// }
// int main(int argc, char *argv[]) {
    // yyin = fopen(argv[1], "r");
    // yylex();
    // fclose(yyin);
    // printf("Number of characters : %d\n", characters);
    // printf("Number of spaces : %d\n", spaces);
    // printf("Number of words : %d\n", words);
    // printf("Number of lines : %d\n", lines);
// }
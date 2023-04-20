%{

/* This is the C code for including header file and declaring Variables */

#include <stdio.h>

void foo(long long yyleng, char *yytext);
void LETStatement(char* yytext, long long yyleng);
void PRINTStatement(char* yytext, long long yyleng);
%}

/* Remaining --> DATA?, DEF, DIM, FOR, GOTO, GOSUB, IF, INPUT */
%%

^[0-9][0-9]{0,3}[\ ]+REM[^\n]*     {printf("REM statement found");foo(yyleng, yytext);}
^[0-9][0-9]{0,3}[\ ]+STOP[^\n]*     {printf("STOP statement found");}
^[0-9][0-9]{0,3}[\ ]+END[^\n]*     {printf("END statement found");}
^[0-9][0-9]{0,3}[\ ]+RETURN[^\n]*     {printf("RETURN statement found");}
^[0-9][0-9]{0,3}[\ ]+LET[\ ]+[A-Z][0-9]?(%|!|#|$)?[^\n]*     {LETStatement(yytext, yyleng);}
^[0-9][0-9]{0,3}[\ ]+PRINT[^\n]*   {PRINTStatement(yytext, yyleng);}

%%

void foo(long long yyleng, char *yytext)
{
    printf("yyleng: %lld\n", yyleng);
    for (int i = 0; i < yyleng; i++)
    {
        printf("%c", yytext[i]);
    }
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

int main()
{
    while(1)
    {
        printf("%d", yylex());
    }
}
// int main(int argc, char *argv[]) {
    // yyin = fopen(argv[1], "r");
    // yylex();
    // fclose(yyin);
    // printf("Number of characters : %d\n", characters);
    // printf("Number of spaces : %d\n", spaces);
    // printf("Number of words : %d\n", words);
    // printf("Number of lines : %d\n", lines);
// }
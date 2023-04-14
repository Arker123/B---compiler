%{

/* This is the C code for including header file and declaring Variables */

#include <stdio.h>

void foo(long long yyleng, char *yytext);
%}


%%

^[0-9][0-9]{0,3}[\ ]REM[^\n]*     {printf("REM statement found");foo(yyleng, yytext);}
^[0-9][0-9]{0,3}[\ ]LET[^\n]*     {printf("LET statement found");}
^[0-9][0-9]{0,3}[\ ]PRINT[^\n]*   {printf("PRINT statement found");}
^[0-9][0-9]{0,3}[\ ]END[^\n]*     {printf("END statement found");}

%%

void foo(long long yyleng, char *yytext)
{
    printf("yyleng: %lld\n", yyleng);
    for (int i = 0; i < yyleng; i++)
    {
        printf("%c", yytext[i]);
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
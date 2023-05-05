%{

/* This is the C++ code for including header file and declaring Variables */

#include <stdio.h>
int characters = 0, spaces = 0, words = 0, lines = 0;

%}

%%

\n            {lines++; characters++;}
[\t ]         {characters += yyleng; spaces += yyleng;}
[^\t \n]+     {characters += yyleng; words++;}

%%

/*
    This is the function to perform the task asked to done
    Open the file for input
    Print the number of characters, spaces, words ans lines.
*/

int main(int argc, char *argv[]) {
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    printf("Number of characters : %d\n", characters);
    printf("Number of spaces : %d\n", spaces);
    printf("Number of words : %d\n", words);
    printf("Number of lines : %d\n", lines);
}
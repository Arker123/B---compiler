%{

/* This is the C++ code for including header file and declaring Variables */

#include <stdio.h>
int commented_lines = 0;
int num_lines(long long yyleng, char *yytext);
FILE *file;
    
%}

%%

\/\*(.|\n)*\*\/   {commented_lines += num_lines(yyleng, yytext);}
(\/\/.*\n)        {commented_lines++;}
(.|\n)            {printf("%c", yytext[0]); fprintf(file, "%c", yytext[0]);}             

%%

/* This is the function for getting the number of lines when there is a comments quoted between slashes and stars */

int num_lines(long long yyleng, char *yytext) {
    int lines = 1;
    for (int i = 0; i < yyleng; i++)
    {
        if (yytext[i] == '\n')
        {
            lines++;
        }
    }
    return lines;
}

/*
    This is the maine function to perform the task asked to done 
    Opening the file for input
    Writing the code in the file
    Printing the number of commented lines
*/

int main(int argc, char *argv[]) {
    file = fopen("code.c", "w");
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    fclose(file);
    printf("Number of commented lines : %d\n", commented_lines);
}
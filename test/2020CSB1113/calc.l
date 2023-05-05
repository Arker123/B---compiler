%{

/* This is the C++ code for including header file and declaring Variables */

#include <stdio.h>
#include <string.h>
#include <math.h>
int valid = 1, prev = -1;
char bracket[1000];
int num_b = 0;
int Identifiers = 0;
int Integers = 0;
int Operators = 0;
int Brackets = 0;
char **identifiers = 0;
char **operators = 0;
char **brackets = 0;
int *integers = 0;
char **copy(char **arr, int i, char *x);
void print(char **arr, int size);

%}

%%

([A-Za-z][0-9A-Za-z]*)      {identifiers = copy(identifiers, Identifiers, yytext); Identifiers++; if (prev == 1 | prev == 2 | prev == 5) {valid = 0;} prev = 1;}
([0-9]+)                    {integers = (int *) realloc(integers, sizeof(int) * (Integers + 1)); integers[Integers] = atoi(yytext); Integers++; if (prev == 1 | prev == 2 | prev == 5) {valid = 0;} prev = 2;}
(\*|\+|\-|\/)               {operators = copy(operators, Operators, yytext); Operators++; if (prev == 3 | prev == 4) {valid = 0;} prev = 3;}
(\(|\{|\[)                  {brackets = copy(brackets, Brackets, yytext); Brackets++; bracket[num_b] = yytext[0]; num_b++; if (prev == 1 | prev == 2 | prev == 5) {valid = 0;} prev = 4;}
(\)|\}|\])                  {brackets = copy(brackets, Brackets, yytext); Brackets++; if(num_b == 0 || yytext[0] - bracket[num_b - 1] > 2) {valid = 0;} else if (num_b > 0) {num_b--;}; if (prev == 4 | prev == 3) {valid = 0;} prev = 5;}
[\t \n]
(.)                         valid = 0;

%%

/* This is a function to make copy of an array */

char **copy(char **arr, int i, char *x)
{
    arr = (char **) realloc(arr, sizeof(char *) * (i + 1));
    arr[i] = (char *) malloc(sizeof(char) * (strlen(x)));
    for (int j = 0; j < strlen(x); j++)
    {
        arr[i][j] = x[j];
    }
    return arr;
}

/* This is a function to print an array */

void print(char **arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%s ", arr[i]);
    }
    printf("\n");
}

/* The main function to perform the task asked to perform */

int main(int argc, char *argv[]) {
    yyin = fopen(argv[1], "r");
    yylex();
    fclose(yyin);
    if (num_b > 0 | prev == 3)
    {
        valid = 0;
    }
    if (valid == 0)
    {
        printf("INVALID EXPRESSION\n");
    }
    else
    {
        printf("VALID EXPRESSION\n");
    }
    printf("Number of integers are: %d\n", Integers);
    for (int i = 0; i < Integers; i++)
    {
        printf("%d\n", integers[i]);
    }
    printf("Number of identifiers are : %d\n", Identifiers);
    print(identifiers, Identifiers);
    printf("Number of operators are : %d\n", Operators);
    print(operators, Operators);
    printf("Number of brackets are : %d\n", Brackets);
    print(brackets, Brackets);
}
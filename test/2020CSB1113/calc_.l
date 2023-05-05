%{

/* This is the C++ code for including header file and declaring Variables */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "y.tab.h"
extern int yylval;
int valid = 1, prev = -1;
char bracket[1000];
int numB = 0;
void yyerror(const char* message);

%}

%%

([0-9]+)                    {if (prev == 2 | prev == 5) {yyerror("TWO NUMBERS CANNOT BE CONSECUTIVE AND A NUMBER CANNOT BE DIRECTLY NEXT TO A CLOSING BRACKET\n"); return yytext[0];} prev = 2; yylval = atoi(yytext); return NUMBER;}
(\*|\+|\-|\/)               {if (prev == 3 | prev == 4) {yyerror("TWO OPERATORS CANNOT BE CONSECUTIVE AND AN OPERATOR CANNOT BE DIRECTLY NEXT TO OPENING BRACKET\n"); return yytext[0];} prev = 3; return yytext[0]; }
(\(|\{|\[)                  {bracket[numB] = yytext[0]; numB++; if (prev == 2 | prev == 5) {yyerror("TWO OPENING BRACKETS CANNOT BE CONSECUTIVE AND AN OPENING BRACKET CANNOT BE DIRECTLY NEXT TO A NUMBER\n"); return yytext[0];} prev = 4; return yytext[0];}
(\)|\}|\])                  {if(numB == 0 || yytext[0] - bracket[numB - 1] > 2) {yyerror("UNMATCHED BRACKETS\n"); return yytext[0];} else if (numB > 0) {numB--;}; if (prev == 4 | prev == 3) {yyerror("TWO CONSECUTIVE BRACKETS NOT ALLOWED\n"); return yytext[0];} prev = 5; return yytext[0];}
[\t \n]
(.)                         yyerror("INVALID CHARACTER ENCOUNTERED\n"); return yytext[0];

%%
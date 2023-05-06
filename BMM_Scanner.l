%{

/* This is the C code for including header file and declaring Variables */

#include <stdio.h>
#include <string.h>
#include "y.tab.h"
extern int yylval;
void yyerror(const char* message);

int countn=0;


int foo(long long yyleng, char *yytext);
void LETStatement(char* yytext, long long yyleng);
void PRINTStatement(char* yytext, long long yyleng);
%}

/* Remaining --> DATA?, DEF, DIM, FOR, GOTO, GOSUB, IF, INPUT */
/* REM -> 0*/
/* STOP -> 1*/

%option yylineno

alpha [a-zA-Z]
digit [0-9]

%x expression
%x value
%x dim
%x gotoo
%x gosub
%x iff
%x inputt
%x remm
%x forr_nextt
%x deff

/* Left--> DEF, variable type error */

%%

[0-9][0-9]{0,3} {yylval=atoi(yytext); return ID;}
"PRINT" {BEGIN(expression); return PRINT;}
"DEF" {BEGIN(deff); return DEF;}
"FOR" {BEGIN(forr_nextt); return FOR;}
"LET" {BEGIN(expression); return LET;}
"DATA" {BEGIN(value); return DATA;}
"DIM" {BEGIN(dim); return DIM;}
"GOTO" {BEGIN(gotoo); return GOTO;}
"GOSUB" {BEGIN(gosub); return GOSUB;}
"IF" {BEGIN(iff); return IF;}
"INPUT" {BEGIN(inputt); return INPUT;}
"REM" { BEGIN(remm); return REM; }
"STOP" {return STOP;}
"RETURN" {return RETURN;}
"END" {return END;}
[ \t] {;}
[\n]  { countn++; }


<expression>(\n) {BEGIN(0);}
<expression>[A-Z][0-9]?(%|!|#|\$)? {return VAR;}

<expression>[0-9]+ {return NUM;}
<expression>(\+|\-|\*|\/) {return yytext[0];}

<expression>(\(|\{|\[) {return yytext[0];}
<expression>(\)|\}|\]) {return yytext[0];}

<expression>(\=|\<|\>|\>\=|\<\=|\<\>) {return yytext[0];}

<expression>[ ]


<value>(\n) {BEGIN(0);}
<value>[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)? {return FLOAT;}
<value>\".*\" {return STRING;}
<value>[ \,]


<dim>(\n) {BEGIN(0);}
<dim>[A-Z]\([0-9]+\ *(,\ *[0-9]+)?\) {return DIMDATA;}
<dim>[ \,]

<gotoo>(\n) {BEGIN(0);}
<gotoo>[0-9]+ {return GOTOID;}
<gotoo>[ ]

<gosub>(\n) {BEGIN(0);}
<gosub>[0-9]+ {return GOSUBID;}
<gosub>[ ]

<iff>(\n) {BEGIN(0);}

<iff>[A-Z][0-9]?(%|!|#|\$)? {return IFVAR;}
<iff>[0-9]+ {return IFNUM;}

<iff>(\+|\-|\*|\/) {return yytext[0];}
<iff>(\(|\{|\[) {return yytext[0];}
<iff>(\)|\}|\]) {return yytext[0];}
<iff>(\=|\<|\>|\>\=|\<\=|\<\>) {return yytext[0];}

<iff>THEN {return THEN;}

<iff>[ ]

<inputt>(\n) {BEGIN(0);}
<inputt>[A-Z][0-9]?(%|!|#|\$)? {return INPUTTOKEN;}
<inputt>[A-Z]\([0-9]+\ *(,\ *[0-9]+)?\) {return INPUTTOKEN;}
<inputt>[ \,] {}

<remm>[^\n]* {}
<remm>(\n) {BEGIN(0);}

<forr_nextt>STEP {return STEP;/*STEP detected*/}
<forr_nextt>TO {return TO;/*TO detected*/}

<forr_nextt>[0-9]+ {return NUM;}
<forr_nextt>(\+|\-|\*|\/) {return yytext[0];}
<forr_nextt>(\(|\{|\[) {return yytext[0];}
<forr_nextt>(\)|\}|\]) {return yytext[0];}
<forr_nextt>(\=|\<|\>|\>\=|\<\=|\<\>) {return yytext[0];}

<forr_nextt>[A-Z][0-9]?(%|!|#|\$)? {return VAR;}
<forr_nextt>[/NEXT/][ ][A-Z][0-9]?(%|!|#|\$)? {BEGIN(0); return NEXT;/*NEXT detected*/}
<forr_nextt>[ ] {/*space detected*/}
<forr_nextt>(\n) {}


<deff>FN[A-Z] {return FN;}
<deff>[\(\)] {return yytext[0];}
<deff>[A-Z][0-9]?(%|!|#|\$)? {return VAR;}
<deff>[0-9]+ {return NUM;}
<deff>(\+|\-|\*|\/) {return yytext[0];}
<deff>(\(|\{|\[) {return yytext[0];}
<deff>(\)|\}|\]) {return yytext[0];}
<deff>(\=) {return yytext[0];}
<deff>[ ]

<deff>(\n) {BEGIN(0);}

%%


/*

10 LET I=10
num
let
rem
...
expr

10 LET I=1 

10 REM DISPLAY ODD NUMBERS FROM 1 TO 9
20 LET I=1
30 PRINT I
40 END

[0-9][0-9]{0,3}[ ]*PRINT[ ]*.*(\n) {printf("PRINT Statement Found\n");}
[0-9][0-9]{0,3}[ ]*END[ ]*(\n) {printf("END Statement found");}

. {printf("yoo"); printf("Token: %s", yytext);} t
 yylval=atoi(yytext); return ID;

[0-9][0-9]{0,3} {printf("Int\n"); yylval=atoi(yytext); return ID;}
REM(.)*(\n)     {yylval = 1;return STATEMENT;}
STOP[^\n]*     {yylval = 2;return STATEMENT;}
END[^\n]*     {yylval = 3; return STATEMENT;}
RETURN[^\n]*     {yylval = 4; return STATEMENT;}
LET[\ ]+     {yylval = 5; return STATEMENT;}
[A-Z][0-9]?(%|!|#|$)?[^\n]*     {yylval = 6; return ID;}
*/
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
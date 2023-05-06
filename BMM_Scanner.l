%{

/* This is the C code for including header file and declaring Variables */

#include <stdio.h>
#include <string.h>
#include "y.tab.h"
extern int yylval;
extern void yyerror(const char* message);
int forCounter=0;
int gosubCounter=0;
int endCounter = 0;
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
%x forr
%x deff
%x nextt

/* Left--> variable type error, print error (I, negative consideration in NUM I=-1  */

%%

[0-9][0-9]{0,3} {yylval=atoi(yytext); return ID;}
"NOT" {return NOT;}
"AND" {return AND;}
"OR" {return OR;}
"XOR" {return XOR;}
"PRINT"     {BEGIN(expression); fprintf(yyout,"PRINT Statement found!\n"); return PRINT;}
"DEF"       {BEGIN(deff); fprintf(yyout,"DEF Statement found!\n"); return DEF;}
"FOR"       {forCounter++;BEGIN(forr); fprintf(yyout,"FOR Statement found!\n"); return FOR;}
"NEXT"      {
                forCounter--; 
                BEGIN(nextt); 
                fprintf(yyout,"NEXT Statement found!\n"); return NEXT;
                if(forCounter%2!=0){
                    fprintf(yyout,"ERROR: NEXT STATEMENT AND FOR DO NOT MATCH, EXITING\n");
                }
            }
"LET"       {BEGIN(expression); fprintf(yyout,"LET Statement found!\n"); return LET;}
"DATA"      {BEGIN(value); fprintf(yyout,"DATA Statement found!\n"); return DATA;}
"DIM"       {BEGIN(dim); fprintf(yyout,"DIM Statement found!\n"); return DIM;}
"GOTO"      {BEGIN(gotoo); fprintf(yyout,"GOTO Statement found!\n"); return GOTO;}
"GOSUB"     {gosubCounter++;BEGIN(gosub); fprintf(yyout,"GOSUB Statement found!\n"); return GOSUB;}
"IF"        {BEGIN(iff); fprintf(yyout,"IF Statement found!\n"); return IF;}
"INPUT"     {BEGIN(inputt); fprintf(yyout,"INPUT Statement found!\n"); return INPUT;}
"REM"       {BEGIN(remm); fprintf(yyout,"REM Statement found! Comment\n"); return REM; }
"STOP"      {fprintf(yyout,"STOP Statement found!\n"); return STOP;}
"RETURN"    {
                gosubCounter--;
                fprintf(yyout,"RETURN Statement found!\n");
                if(gosubCounter%2!=0){
                    fprintf(yyout,"ERROR: RETURN STATEMENT AND GOSUB DO NOT MATCH, EXITING \n");
                } 
                return RETURN;}
"END"       {
                fprintf(yyout,"END Statement found!\n"); 
                endCounter++;
                if(endCounter>1){
                    yyerror("INVALID:END OCCURED MORE THAN ONCE\n");
                    exit(0);
                } 
                return END;
            }
[ ] {;}
[\t] {fprintf(yyout,"Syntax Error: Tabs are not allowed\n");}
[\n]  { countn++; fprintf(yyout,"------------------------------------------------------\n");}
<<EOF>> {fprintf(yyout,"Program Checked Successfully!!!\n");exit(0);}

<expression>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}
<expression>[A-Z][0-9]?(%|!|#|\$)? {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<expression>\".*\" {return STRING;}
<expression>[A-Z]\(\ *[0-9a-zA-Z]+\ *(,\ *[0-9a-zA-Z]+)?\) {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<expression>[,;] {return yytext[0];}
<expression>[0-9]+ {return NUM;}
<expression>(\|\^|\+|\-|\*|\/) {return yytext[0];}
<expression>AND {return AND;}
<expression>OR {return OR;}
<expression>XOR {return XOR;}
<expression>NOT {return NOT;}
<expression>(\(|\{|\[) {return yytext[0];}
<expression>(\)|\}|\]) {return yytext[0];}

<expression>(\=|\<|\>|\>\=|\<\=|\<\>) {return yytext[0];}

<expression>[ ]


<value>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}
<value>[-+]?[0-9]*\.?[0-9]+([eE][-+]?[0-9]+)? {return FLOAT;}
<value>\".*\" {return STRING;}
<value>[ \,]


<dim>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}
<dim>[A-Z]\(\ *[0-9]+\ *(,\ *[0-9]+)?\) {fprintf(yyout,"Identifier: %s \n", yytext);return DIMDATA;}
<dim>[ \,]

<gotoo>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}
<gotoo>[0-9]+ {fprintf(yyout,"Line to GOTO: %s\n", yytext);return GOTOID;}
<gotoo>[ ]

<gosub>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}
<gosub>[0-9]+ {return GOSUBID;}
<gosub>[ ]

<iff>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}

<iff>[A-Z]\(\ *[0-9a-zA-Z]+\ *(,\ *[0-9a-zA-Z]+)?\) {fprintf(yyout,"Identifier: %s \n", yytext);return IFVAR;/*DIMDATA VARIABLE*/}
<iff>[A-Z][0-9]?(%|!|#)? {fprintf(yyout,"Identifier: %s \n", yytext);return IFVAR;}
<iff>[A-Z][0-9]?(\$) {fprintf(yyout,"Identifier: %s \n", yytext);return IFSTRINGVAR;}
<iff>[0-9]+ {return IFNUM;}
<iff>\".*\" {return IFSTRING;}

<iff>(\^|\+|\-|\*|\/) {return yytext[0];}
<iff>(\(|\{|\[) {return yytext[0];}
<iff>(\)|\}|\]) {return yytext[0];}
<iff>(\=|\<|\>|\>\=|\<\=|\<\>) {return yytext[0];}

<iff>THEN {return THEN;}

<iff>[ ]

<inputt>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}
<inputt>[A-Z][0-9]?(%|!|#|\$)? {fprintf(yyout,"Identifier: %s\n", yytext);return INPUTTOKEN;}
<inputt>[A-Z]\(\ *[0-9a-zA-Z]+\ *(,\ *[0-9a-zA-Z]+)?\) {fprintf(yyout,"Identifier: %s\n", yytext);return INPUTTOKEN;}
<inputt>[ \,] {}

<remm>[^\n]* {}
<remm>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}

<forr>STEP {return STEP;/*STEP detected*/}
<forr>TO {return TO;/*TO detected*/}

<forr>[0-9]+ {return NUM;}
<forr>(\^|\+|\-|\*|\/) {return yytext[0];}
<forr>(\(|\{|\[) {return yytext[0];}
<forr>(\)|\}|\]) {return yytext[0];}
<forr>(\=) {return yytext[0];}

<forr>[A-Z]\(\ *[0-9a-zA-Z]+\ *(,\ *[0-9a-zA-Z]+)?\) {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<forr>[A-Z][0-9]?(%|!|#|\$)? {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<forr>[ ] {/*space detected*/}
<forr>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}


<nextt>[ ] {/*space detected*/}
<nextt>[A-Z][0-9]?(%|!|#|\$)? {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<nextt>[A-Z]\(\ *[0-9a-zA-Z]+\ *(,\ *[0-9a-zA-Z]+)?\) {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<nextt>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}


<deff>FN[A-Z] {return FN;}
<deff>[\(\)] {return yytext[0];}
<deff>[A-Z][0-9]?(%|!|#|\$)? {fprintf(yyout,"Identifier: %s \n", yytext);return VAR;}
<deff>[0-9]+ {return NUM;}
<deff>(\^|\+|\-|\*|\/) {return yytext[0];}
<deff>(\(|\{|\[) {return yytext[0];}
<deff>(\)|\}|\]) {return yytext[0];}
<deff>(\=) {return yytext[0];}
<deff>[ ]

<deff>(\n) {BEGIN(0);fprintf(yyout,"------------------------------------------------------\n");}

%%



int foo(long long yyleng, char *yytext)
{
    fprintf(yyout,"yyleng: %lld\n", yyleng);
    for (int i = 0; i < yyleng; i++)
    {
        fprintf(yyout,"%c", yytext[i]);
    }
    return yyleng;
}

void LETStatement(char* yytext, long long yyleng)
{
    fprintf(yyout,"LET statement found\n");
    // Parse LET Statement and return the token
    char* token = strtok(yytext, " ");
    char* variable = strtok(NULL, " ");
    char* operator = strtok(NULL, "=");
    char* operand = strtok(NULL, " ");
    fprintf(yyout,"Token: %s\n", token);
    fprintf(yyout,"Variable: %s\n", variable);
    fprintf(yyout,"Operator: %s\n", operator);
    fprintf(yyout,"Operand: %s\n", operand);

}

void PRINTStatement(char* yytext, long long yyleng)
{
    fprintf(yyout,"PRINT statement found\n");
    // Parse PRINT Statement and return the token
    char* token = strtok(yytext, " ");
    char* variable = strtok(NULL, " ");
    char* operator = strtok(NULL, " ");
    fprintf(yyout,"Token: %s\n", token);
    fprintf(yyout,"Variable: %s\n", variable);
    fprintf(yyout,"Operator: %s\n", operator);
}

int yywrap()
{
    return 1;
}

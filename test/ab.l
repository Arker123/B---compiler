%{
#include <stdio.h>
#include "y.tab.h"
void yyerror(const char* message);

extern int yylval;

%}
%%
[0-9]+ yylval=atoi(yytext); return NUMBER;
heat return TOKHEAT;
on|off yylval=!strcmp(yytext,"on"); return STATE;
target return TOKTARGET;
temperature return TOKTEMPERATURE;
\n /* ignore end of line */;
[ \t]+ /* ignore whitespace */;
%%
%{

#include <stdio.h>
#include <string.h>
#include <math.h>
#include "y.tab.h"
void yyerror();

%}

%%

(.|\n)       return yytext[0];

%%
%{

#include <stdio.h>
#include <string.h>
void yyerror(const char* message);
int yylex();

%}

%token ID STATEMENT


%%

commands: index statement content;
index: ID {printf("ID: %d", $1);}
statement: STATEMENT {printf("Statement: %d", $1); if ($1 == 1) printf("REM Statement");}
content: ;


%%

void yyerror(const char* message)
{
	printf("ERROR : %s", message);
}

int main()
{
yyparse();
}
%{

#include <stdio.h>
#include <string.h>
void yyerror(const char* message);
int yylex();

%}

%union {
	char* string;
}

%token <string>ID 
%token STATEMENT


%%

commands: index;
index: ID {printf("ID: %s\n", $1);}


%%
/*
statement: STATEMENT {printf("Statement: %d", $1); if ($1 == 1) printf("REM Statement");}
content: ;

*/
void yyerror(const char* message)
{
	// printf("%s", ID);
	printf("ERROR : %s", message);
}

int main()
{
yyparse();
}
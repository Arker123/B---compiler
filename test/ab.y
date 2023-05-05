%{
#include <stdio.h>
#include <string.h>
int yylex();
void yyerror(const char* message);

%}

%token NUMBER TOKHEAT STATE TOKTARGET TOKTEMPERATURE

%%
commands: /* empty */
    | commands command
;
command:
    heat_switch
    |
    target_set
;
heat_switch:
    TOKHEAT STATE
        {
        if($2)
            printf("\tHeat turned on\n");
        else
            printf("\tHeat turned off\n");
        }
    ;
target_set:
TOKTARGET TOKTEMPERATURE NUMBER
{
    printf("\tTemperature set to %d\n",$3);
}
;
%%

void yyerror(const char* message)
{
	printf("ERROR : %s", message);
}
int main()
{
yyparse();
}

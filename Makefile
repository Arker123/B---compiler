all: 
	lex BMM_Scanner.l; yacc -d BMM_Parser.y; gcc lex.yy.c y.tab.c

lex:
	lex BMM_Scanner.l

yacc: 
	yacc -d BMM_Parser.y

gcc:
	gcc lex.yy.c y.tab.c -lfl
 
counter:
	yacc -d BMM_Parser.y -Wcounterexamples

clean: 
	rm -f lex.yy.c y.tab.c y.tab.h a.out
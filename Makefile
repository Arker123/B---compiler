all: 
	lex BMM_Scanner.l; yacc -d BMM_Parser.y; gcc lex.yy.c y.tab.c
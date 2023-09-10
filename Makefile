run.exe: myflex.l myparser.y
	bison -d myparser.y
	flex myflex.l
	cc -o $@ myparser.tab.c lex.yy.c -lfl
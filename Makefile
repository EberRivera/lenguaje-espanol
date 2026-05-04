all:
	bison -d espanol.y
	flex espanol.l
	gcc -o espanol espanol.tab.c lex.yy.c ast.c eval.c tabla.c -ll

clean:
	rm -f espanol espanol.tab.c espanol.tab.h lex.yy.c

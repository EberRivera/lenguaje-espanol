all:
	bison -d espanol.y
	flex espanol.l
	gcc -o espanol espanol.tab.c lex.yy.c -ll

clean:
	rm -f espanol espanol.tab.c espanol.tab.h lex.yy.c

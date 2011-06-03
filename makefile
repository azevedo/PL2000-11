logoliss: y.tab.o lex.yy.o
	cc -o logoliss y.tab.o lex.yy.o -lfl

y.tab.o: y.tab.c
	cc -c y.tab.c

lex.yy.o: lex.yy.c
	cc -c lex.yy.c


lex.yy.c: logo.l y.tab.h
	flex logo.l

y.tab.c y.tab.h: logo.y
	yacc -d -v logo.y

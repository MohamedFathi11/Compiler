lex pro.l
yacc -d  pro.y
gcc lex.yy.c y.tab.c
./a.out

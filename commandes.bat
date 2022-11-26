flex lexical.l
bison -d synt.y
gcc lex.yy.c synt.tab.c -lfl -ly -o compi.exe
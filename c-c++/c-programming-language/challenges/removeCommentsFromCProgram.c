#include <stdio.h>

int main()
{
    int previous, c;
    FILE *fp = fopen("removeCommentsFromCProgram.c", "w+");
    FILE *tobewritten = fopen("removeCommentsFromItself.c", "w");
    int putChar = 0;
    int multiLine = 0;

    while ((c = getc(fp)) != EOF) {
        if (putChar)                     { putc(c, tobewritten); }
        if (c == '*' && previous == '/') { multiLine = 1; }
        if (c == '/' && previous == '/') { putChar = 0; }

        previous = c;
    }
}


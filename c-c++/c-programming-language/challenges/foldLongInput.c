#include <stdio.h>

/* C Coding Challenge - exercise 1.22 from The C Programming Language */

/* 
Prompt:
"Write a program to "fold" long input lines into two or more
shorter lines after the last non-blank character that occurs before
the n-th column of input. Make sure your program does something
intelligent with very long lines, and if there are no blanks or tabs
before the specified column."
*/


#define MAXFOLDED 50 // define max number of characters per folded line 

void ResetString(char string[], int size, int start);

int main()
{
    FILE *fname;
    char fileName[9] = "test.txt";
    if ((fname = fopen(fileName, "r")) == NULL) {
        printf("File %s cannot be found.\n", fileName);
    }

    char linefold[MAXFOLDED];
    int bindex = 0;
    int i, c;
    i = 0;
    
    while ((c = getc(fname)) != EOF) {
        if (c == ' ') bindex = i;
        linefold[i++] = c;

        if (c == '\n') {
            linefold[i] = '\0';
            i = 0;
            printf("%s", linefold);
            ResetString(linefold, MAXFOLDED, i);
        }

        if (i == MAXFOLDED - 1) {
            linefold[bindex++] = '\0';
            printf("%s\n", linefold);

            for (i = 0; bindex < MAXFOLDED; bindex++) {
                linefold[i++] = linefold[bindex];
            }
            i--;
            ResetString(linefold, MAXFOLDED, i);
        }
    }

    printf("%s\n", linefold);

    return 0;
}

void ResetString(char string[], int size, int start)
{
    for (int i = start; i < size; i++) {
        string[i] = '\0';
    }
}

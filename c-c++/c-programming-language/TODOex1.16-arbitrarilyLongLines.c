#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
	int len; 	/* current line length */
	int max; 	/* maximum length seen so far */
	char line[MAXLINE]; 	/* current input line */
	char longest[MAXLINE];  /* longest line saved here */

	max = 0;
	while (len = (getline(line, MAXLINE)) > 0)
	{
		if (len > max) {
			max = len;
			copy(longest, line);
			printf("%s\n", longest);
		}
	}
	if (max > 0) /* there was a line */
		printf("lenght of longest line: %d\n",
				max);
		printf("%s\n", longest);
	return 0;
}

/* getline: read a line into s, return length */
int getline (char s[], int lim)
{
	int c, i;

	for (i = 0; (c=getchar()) != EOF ; ++i)
	{
		if (c == '\n') {
			s[i] = c;
			++i;
			break;
		}
		s[i] = c;
	}
	if (i >= lim-1)
		s[lim-1] = '\0';
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	while ((to[i] = from[i]) != '\0')
		++i;
}




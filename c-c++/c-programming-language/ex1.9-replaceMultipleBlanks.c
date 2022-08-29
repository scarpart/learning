#include <stdio.h>

int main()
{
	int c;
	int alreadyBlank = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' && !alreadyBlank)
		{
			putchar(c);
			alreadyBlank = 1;
		}
		if (c != ' ') 
		{
			alreadyBlank = 0;
			putchar(c);
		}
	}
}

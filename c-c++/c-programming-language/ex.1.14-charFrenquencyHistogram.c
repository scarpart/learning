#include <stdio.h>

int main()
{
	int c, nothers, nwhitespace;
	int characters[12];

	for (int i = 0; i < 12; i++) characters[i] = 0;

	while ((c = getchar()) != '\n')
	{
		if (c >= '0' && c <= '9') {
			++characters[c-'0'];
		} else if (c == ' ') {
			++nwhitespace;
		} else {
			++nothers;
		}
	}

	characters[11] = nothers;
	characters[10] = nwhitespace;

	for (int i = 0; i < 12; i++)
	{
		putchar(i+'0');
		putchar(' ');
		for (int _ = 0; _ < characters[i]; _++)
		{
			putchar('#');
		}
		putchar('\n');	
	}

	return 0;
}


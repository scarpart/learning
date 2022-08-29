#include <stdio.h>

int main()
{
	int c, state;
	state = 0;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t') {
			state = 0;
			putchar('\n');
		} else if (!state) {
			state = 1;
		}

		if (state) putchar(c);
	}
}

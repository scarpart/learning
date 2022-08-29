#include <stdio.h>

int main()
{
	int c;
	while (1)
	{
		printf("%d\n", c = getchar() != EOF);
		putchar(c);
	}
}

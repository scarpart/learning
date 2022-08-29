#include <stdio.h>

int main()
{
	int c;
	for (c = 0; c <= 300; c+= 20)
	{
		int fahrenheit = c*(9/5)+32;
		printf("%d %d\n", c, fahrenheit);
	}
}

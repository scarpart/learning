#include <stdio.h>

int main()
{
	int blankCount, tabCount, newlineCount;
	
	int c;
	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
			case ' ':
				++blankCount;
				break;
			case '\t':
				++tabCount;
				break;
			case '\n':
				++newlineCount;
				break;
			default:
				continue;
		}
	printf("Blanks: %d, tabs: %d, newlines: %d\n",
			blankCount, tabCount, newlineCount);
	}
	return 0;
}



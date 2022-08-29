#include <stdio.h>

int main()
{
	int c;
	int wlength = 0;
	
	for ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t') {
			wlength = 0;
		} else {
			++wlength;
		}

	}



	return EXIT_SUCCESS;
}

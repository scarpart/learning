#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
	int f;

	for (f = LOWER; f <= UPPER; f += STEP)
	{
		printf("%3d %6.1f\n", f, 5.0/9 * (f-32));
	}
}

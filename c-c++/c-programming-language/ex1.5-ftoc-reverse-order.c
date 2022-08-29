#include <stdio.h>
#include <stdlib.h>

int main()
{
	float f;

	for(f = 300; f >= 0; f -= 20)
	{
		printf("%3.0f %6.1f\n", f, (9/5) * (f-32));
	}
}

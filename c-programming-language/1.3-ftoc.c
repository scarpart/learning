#include <stdio.h>
#include <stdlib.h>

int main()
{
	float f, c;
	
	for (f = 0; f < 300; f += 20)
	{
		c = (5.0/9.0) * (f-32);
		printf("%3.0f %6.1f\n", f, c);
	}
	return 0;
}

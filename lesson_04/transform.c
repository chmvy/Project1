#include <stdio.h>
#include <float.h>

int main()
{
	float f, x = 3.2, y = 5.3;
	int i = 4, a, b;
	a = x + y;
	b = (int)(x + y);
	f = 10 / i;

	printf("%d,\n, %d \n, %f, %f", a, b, f, x);

	return 0;
}
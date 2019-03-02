#include <stdio.h>
#include <float.h>

int main()
{
	printf("float存储最大字节数: %d \n", sizeof(float));
	printf("float最小值:%E \n", FLT_MIN);
	printf("float最小值:%E \n", FLT_MAX);

	return 0;
}
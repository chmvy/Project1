#include <stdio.h>
#include <float.h>

int main()
{
	
	float f, x = 3.2, y = 5.3;
	int i = 4, a, b;
	//两个浮点运算结果是一个整形
	
	a = x + y;
	//强制转换 转换要加（）
	b = (int)(x + y);
	f = 10 / i;

	printf("%d,\n%d, \n%f,\n%f, \n", a, b, f, x);

	return 0;
}
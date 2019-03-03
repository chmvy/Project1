#include <stdio.h>

//函数外定义变量x和y
int x;
int y;
int addtwonum()
{
	//声明变量
	extern int x;
	extern int y;
	x = 1;
	y = 2; 

	return x + y;
}

int main()
{
	int result;
	//
	result = addtwonum();
	printf("result的值：%d", result);

	return 0;
}
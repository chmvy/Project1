#include <stdio.h>
//声明全局变量
extern int count;
//定义函数
void write_extern(void)
{
	printf("count is %d\n", count);
}
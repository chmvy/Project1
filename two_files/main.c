#include <stdio.h>
//定义全局变量
int count;
//声明外部文件
extern void write_extern();

int main()
{
	count = 5;
	write_extern();
}
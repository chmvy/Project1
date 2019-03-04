#include <stdio.h>

void swap(int x, int y);
void swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main(int argc, char* argv[])
{
	int a = 5;
	int b = 10;
	//由于值传递是单向传递，传递过程中只是改变了形参的数值，并未改变实参的数值，因此并不会改变a和b原有的值
	//这句话应该怎样理解x=5不代表 a = x,这是单向传递的意思,改变的是x的数值,但是不改变a的值,a赋值完了之后就没啥事了
	//后面都是x参与运算了.要注意区分x和a代表的是不同的变量(地址)
	swap(a, b); //调用交换函数
	printf("交换结果为 a = %d, b = %d\n", a, b);
	return 0;
}
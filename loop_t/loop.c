#include <stdio.h>

int main()
{
	//int i = 1;
	////这种写的无线循环也可以,但是需要引入一个变量
	//while (i) {
	//	printf("无线循环下去...");
	//}
	for (; ; ) {
		printf("这是一个无限循环...\n");
	}
}
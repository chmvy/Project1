#include <stdio.h>
#include <stdlib.h>

int k1 = 1;
int k2;
static int k3 = 2;
static int k4;

int main()
{
	static int m1 = 2, m2;
	int i;
	char *p;
	char str[] = "hello";
	char *q = "hello";
	p = (char*)malloc(100);
	free(p);
	//%p 指针的值
	printf("栈区 变量地址 i: %p\n", &i);
	printf("              p: %p\n", &p);
	//"q"和"str"地址不一样,尽管他们值一样
	printf("            str: %p\n", str);
	printf("            str: %d\n", sizeof(str));
	printf("              q: %p\n", &q);
	printf("              q: %d\n", sizeof(q));
	printf("堆区地址-动态申请:%p\n",p);
	printf("全局变量外部有初始值k1: %p\n", &k1);
	printf("外部无初始值 k2: %p\n", &k2);
	printf("静态外部有初始值 k3: %p\n", &k3);
	printf("静态外部无初始值 k4: %p\n", &k4);
	printf("内静态有初始值 m1: %p\n", &m1);
	printf("内静态无初始值 m2: %p\n", &m2);
	//常量不需要&也可调用地址
	printf("文字常量的地址: %p, %s\n", &q, q);
	printf("程序区地址: %p\n", &main);
	return 0;
}
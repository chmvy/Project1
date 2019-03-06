#include <stdio.h>
#include <stdlib.h>
/*函数指针作为参数传递给另一个函数A,
在A被调用的时候,这个指针指向的函数
会被调用,这个被调用的函数就是回调函数*/
/*
有很多时候用指针可以很大程度上提高程序的效率，
指针只是一个变量，它存储一个内存地址。
在比如进行函数的参数传递时，如果传入一个地址，比传入一个struct效率要高，因为少了一个拷贝过程。
朋友，如果你想学好编程，指针是一个很重要的基础课，必须要学好
函数的调用必须是已知文件名的。如果你写一个系统的某一层，不知道其他层的内部情况，这时候用指针传递函数最合适。还有，结构体里包含指向函数的指针，就相当于一个简单的“对象”了。
看看linux内核里各接口的定义。函数指针的使用使的内核可以很多人同时开发，并且大家只需要知道相应的接口就可以了。这套框架，离不开函数指针。*/
void populate_array(int *array, size_t arraysize, int (*getnextvalue)(void))
{
	for (size_t i = 0; i < arraysize; i++)
		array[i] = getnextvalue();
}
int getnextrandomvalue(void)
{
	return rand();
}

int main()
{
	int myarray[10];
	populate_array(myarray, 10, getnextrandomvalue);
	for (int i = 0; i < 10; i++)
		printf("myarray 的值是 myarry[%d]: %d\n", i, myarray[i]);
	printf("\n");
	return 0;
}
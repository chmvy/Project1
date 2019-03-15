#include <stdio.h>

void swap(int* a, int* b)
{
	//*a中 a是变量，但是*a是指针，区分指针变量和指针
	//swap(&arr[min], &arr[i]);在这一句引用中，传入的形参是一个地址
	//我把它理解成 arr[] 的二级参数，arr[]一级参数不变，但是二级参数可以变，同时不用新引进变量
	//指针不是普通参数，他作为二级参数引进后是可以改变的，因为在程序中没有他的变量申明，他的值是动态的
	//有点类似python中用字典作为参数，同时字典的值去避免新引进变量进行计算
	int temp = *a;
	*a = *b;
	*b = temp;
}
void selection_sort(int arr[], int len)
{
	int i, j;
	for (i = 0; i < len; i++)
	{
		int min = i;
		for (j = i + 1; j < len; j++)
			//没花括号的效果是如果条件成立，就执行for之后的第一条语句，相当于花括号打在for之后的第一条语句
			//此处这个语句就是if语句，如果if成立就执行 “min = j”如果不成立就执行j++
			//for循环执行完了之后，会执行一次swap
			if (arr[j] < arr[min])
				//没花括号的效果是如果条件成立，就执行if之后的第一条语句，相当于花括号打在if之后的第一条语句
				min = j;
		swap(&arr[min], &arr[i]);
	}
}

int main()
{
	int i;
	int arr[] = { 5,2,33,2233,555,55322, 22,77,66 };
	selection_sort(arr, 9);
	for (i = 0; i < 9; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
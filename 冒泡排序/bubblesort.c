#include <stdio.h>

void bubble_sort(int arry[], int len)
{
	int i, j, temp;
	//执行多少次？十个数执行9次就可以了，所以是i-1
	for(i=0;i<len-1;i++)
		//执行多少次？每次找出一个最大的数，后面就可以固定住了
		for(j=0;j<len-1-i;j++)
			if (arry[j] > arry[j + 1]) {
				//引入temp,保存住要变的值,然后对它赋值,把保存的值赋值给另一个值,完成交换
				temp = arry[j+1];
				arry[j + 1] = arry[j];
				arry[j] = temp;
			}
}
int main()
{
	int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
	int len = (int) sizeof(arr) / sizeof(*arr);
	bubble_sort(arr, len);
	for (int i = 0; i < len ; i++)
		printf("%d ,", arr[i]);
	printf("\n");
	return 0;
}
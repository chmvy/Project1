#include <stdio.h>

void bubble_sort(int arry[], int len)
{
	int i, j, temp;
	for(i=0;i<len-1;i++)
		for(j=0;j<len-1-i;j++)
			if (arry[j] > arry[j + 1]) {
				//����temp,����סҪ���ֵ,Ȼ�������ֵ,�ѱ����ֵ��ֵ����һ��ֵ,��ɽ���
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
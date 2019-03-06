#include <stdio.h>

/*函数申明*/
double getAverage(int arr[], int size);

int main()
{
	int banlance[5] = { 1000, 2, 3, 17, 50 };
	double avg;
	//传递数组指针给函数
	avg = getAverage(banlance, 5);

	printf("平均数是：%f",avg);

	return 0;

}

double getAverage(int arr[], int size)
{
	int i;
	double avg;
	double sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	avg = sum / size;

	return avg;
}
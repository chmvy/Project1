#include <stdio.h>

/*��������*/
double getAverage(int arr[], int size);

int main()
{
	int banlance[5] = { 1000, 2, 3, 17, 50 };
	double avg;
	//��������ָ�������,banlance��ָ��
	avg = getAverage(banlance, 5);

	printf("ƽ�����ǣ�%f",avg);

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
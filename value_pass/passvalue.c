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
	//����ֵ�����ǵ��򴫵ݣ����ݹ�����ֻ�Ǹı����βε���ֵ����δ�ı�ʵ�ε���ֵ����˲�����ı�a��bԭ�е�ֵ
	//��仰Ӧ���������x=5������ a = x,���ǵ��򴫵ݵ���˼,�ı����x����ֵ,���ǲ��ı�a��ֵ,a��ֵ����֮���ûɶ����
	//���涼��x����������.Ҫע������x��a������ǲ�ͬ�ı���(��ַ)
	swap(a, b); //���ý�������
	printf("�������Ϊ a = %d, b = %d\n", a, b);
	return 0;
}
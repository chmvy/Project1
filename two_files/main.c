#include <stdio.h>
//����ȫ�ֱ���
int count;
//�����ⲿ�ļ�
extern void write_extern();

int main()
{
	count = 5;
	write_extern();
}
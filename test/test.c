#include <stdio.h>

int main()
{
	int age[6][4];
	for (int i = 0; i < 6; i++)
	{
		//�����ÿһ�еĵ�ַ�����ñ�����+i����ʾ,��Ϊ�������ʹ��������һ��ֵ�ĵ�ַ
		//"age+1"�����ڶ��е�һ���ַ�,"age+2"���������е�һ��������ַ...
		//��ʱage = &age[0][0]
		printf("age + %d address is %p\n", i, age + i);
	}
	for ( int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//���˵�һ���ַ���������,�����Ķ���Ҫ������д
			printf("age[%d][0] + %d address is %p\n",i,j,&age[i][0]+j);
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
/*����ָ����Ϊ�������ݸ���һ������A,
��A�����õ�ʱ��,���ָ��ָ��ĺ���
�ᱻ����,��������õĺ������ǻص�����*/
/*
�кܶ�ʱ����ָ����Ժܴ�̶�����߳����Ч�ʣ�
ָ��ֻ��һ�����������洢һ���ڴ��ַ��
�ڱ�����к����Ĳ�������ʱ���������һ����ַ���ȴ���һ��structЧ��Ҫ�ߣ���Ϊ����һ���������̡�
���ѣ��������ѧ�ñ�̣�ָ����һ������Ҫ�Ļ����Σ�����Ҫѧ��
�����ĵ��ñ�������֪�ļ����ġ������дһ��ϵͳ��ĳһ�㣬��֪����������ڲ��������ʱ����ָ�봫�ݺ�������ʡ����У��ṹ�������ָ������ָ�룬���൱��һ���򵥵ġ������ˡ�
����linux�ں�����ӿڵĶ��塣����ָ���ʹ��ʹ���ں˿��Ժܶ���ͬʱ���������Ҵ��ֻ��Ҫ֪����Ӧ�ĽӿھͿ����ˡ����׿�ܣ��벻������ָ�롣*/
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
		printf("myarray ��ֵ�� myarry[%d]: %d\n", i, myarray[i]);
	printf("\n");
	return 0;
}
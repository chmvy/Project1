#include <stdio.h>
//����ȫ�ֱ���
extern int count;
//���庯��
void write_extern(void)
{
	printf("count is %d\n", count);
}
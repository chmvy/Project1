#include <stdio.h>

/*��������*/
void func1(void);

static int count = 10;

int main()
{
	//count����1ʱ,��Ȼ������ѭ��,Ҳ������Ȼ�ж�������ͨ��,��ʱ�������Ľ��count = 1
	//count--,�����count��ֵ,���Լ�,�����´ν�����count��صļ���
	while (count--) {
		func1();
	}
}

void func1(void)
{
	static int thingy = 5;
	thingy++;
	printf(" thingy Ϊ %d, count Ϊ %d\n", thingy, count);
}
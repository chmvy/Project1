#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n = 10;//���������
	int sum = 1;//������ŵ��˵Ľ��
	//�������ע����"���"���ֵ�,������ָ��һ������
	bool flag = false;
	//Ϊʲô��һ��Ҫ�ȶ���n����Ϊ����Ҫ����num--��Ҳ������n�����Ǻ����û������n��ֵ�ˣ�
	//�����printf�Ͳ�����ȷ������
	int num = n;

	while (!flag)
	{
		sum = sum * (num--);
		if (num == 1)
		{
			flag = true;
		}
	}
	printf("%d�ĵ���ֵΪ %d", n, sum);
	
	return 0;
}
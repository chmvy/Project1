#include <stdio.h>
#include <stdbool.h>

int main()
{
	int n = 10;//定义叠乘数
	int sum = 1;//用来存放叠乘的结果
	//以上这个注释中"存放"二字的,变量是指的一个区域
	bool flag = false;
	//为什么上一步要先定义n，因为后面要计算num--，也可以用n，但是后面就没法保持n的值了，
	//后面的printf就不能正确描述了
	int num = n;

	while (!flag)
	{
		sum = sum * (num--);
		if (num == 1)
		{
			flag = true;
		}
	}
	printf("%d的叠乘值为 %d", n, sum);
	
	return 0;
}
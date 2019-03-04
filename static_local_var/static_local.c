#include <stdio.h>

/*函数申明*/
void func1(void);

static int count = 10;

int main()
{
	//count等于1时,仍然进行了循环,也就是仍然判定了条件通过,此时条件语句的结果count = 1
	//count--,先输出count的值,再自减,用于下次进行与count相关的计算
	while (count--) {
		func1();
	}
}

void func1(void)
{
	static int thingy = 5;
	thingy++;
	printf(" thingy 为 %d, count 为 %d\n", thingy, count);
}
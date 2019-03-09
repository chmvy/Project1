#include <stdio.h>

int main()
{
	int age[6][4];
	for (int i = 0; i < 6; i++)
	{
		//对于二维数组的每一行的地址可以用变量名+i来表示,因为变量名就代表该行数组的第一个值的地址
		//"age+1"代表第二行第一个字符,"age+2"代表第三行第一个变量地址...
		//这时age = &age[0][0]
		printf("age + %d address is %p\n", i, age + i);
	}
	for ( int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			//二维数据,写道第一个[]表示行,写到第二个[]表示列
			//写到第二个参数后,除了第一个字符的特例外,其他的都需要正常书写
			printf("age[%d][0] + %d address is %p\n",i,j,&age[i][0]+j);
		}
	}
}
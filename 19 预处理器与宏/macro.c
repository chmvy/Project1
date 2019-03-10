#include <stdio.h>

int main()
{
	printf("time:%s\n", __TIME__);
	printf("date:%s\n", __DATE__);
	printf("file:%s\n", __FILE__);
	printf("line:%d\n", __LINE__);
	//printf("ANSI:%d\n",__STDC__);
}
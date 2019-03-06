#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum color { red=1,green, blue};
	enum color favorite_color;

	printf("你最喜欢的颜色是:(1. red, 2.green, 3.blue)");
	scanf_s("%d", &favorite_color);

	switch (favorite_color)
	{
	case red:
		printf("你最喜欢的是红色.");
		break;
	case green:
		printf("你最喜欢的是绿色.");
		break;
	case blue:
		printf("你最喜欢的是蓝色");
		break;
	default:
		printf("这里没有你喜欢的颜色");
	}
	return 0;
}
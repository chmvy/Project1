#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum color { red=1,green, blue};
	enum color favorite_color;

	printf("����ϲ������ɫ��:(1. red, 2.green, 3.blue)");
	scanf_s("%d", &favorite_color);

	switch (favorite_color)
	{
	case red:
		printf("����ϲ�����Ǻ�ɫ.");
		break;
	case green:
		printf("����ϲ��������ɫ.");
		break;
	case blue:
		printf("����ϲ��������ɫ");
		break;
	default:
		printf("����û����ϲ������ɫ");
	}
	return 0;
}
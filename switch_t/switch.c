#include <stdio.h>

int main()
{
	char grade = 'B';
	switch (grade)
	{
	case 'A':
		printf("你做得很棒!\n");
		break;
	case 'B':
		//合格之后会接着执行下面的语句printf...
	case 'C':
		//printf("做得好!\n");
		break;
	case 'D':
		printf("您通过了\n");
		break;
	case 'F':
		printf("成绩不合格\n");
		break;
	default:
		printf("成绩无效\n");
	}
	printf("您考试的成绩是 %c\n", grade);

	return 0;
}
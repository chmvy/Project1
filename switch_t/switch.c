#include <stdio.h>

int main()
{
	char grade = 'B';
	switch (grade)
	{
	case 'A':
		printf("�����úܰ�!\n");
		break;
	case 'B':
		//�ϸ�֮������ִ����������printf...
	case 'C':
		//printf("���ú�!\n");
		break;
	case 'D':
		printf("��ͨ����\n");
		break;
	case 'F':
		printf("�ɼ����ϸ�\n");
		break;
	default:
		printf("�ɼ���Ч\n");
	}
	printf("�����Եĳɼ��� %c\n", grade);

	return 0;
}
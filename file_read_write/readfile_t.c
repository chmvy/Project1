#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("/tmp/test.txt", "w+");
	//д��һ��
	fprintf(fp, "This is testing for fprintf...\n");
	//д��һ��
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
}
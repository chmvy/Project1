#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("/tmp/test.txt", "w+");
	//写入一行
	fprintf(fp, "This is testing for fprintf...\n");
	//写入一行
	fputs("This is testing for fputs...\n", fp);
	fclose(fp);
}
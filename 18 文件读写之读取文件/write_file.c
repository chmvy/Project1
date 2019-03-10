#include <stdio.h>

int main()
{
	char buff[250];
	FILE *fp;
	fp = fopen("/tmp/test.txt", "r");
	
	fscanf(fp, "%s", buff);
	printf("1: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("2: %s\n", buff);

	fgets(buff, 255, (FILE*)fp);
	printf("3: %s\n", buff);
	fclose(fp);
}
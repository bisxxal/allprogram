#include<stdio.h>
void main()
{
	FILE *fp;
	char c;
	fp=fopen("file 1.txt","r");
	while ((c=fgetc(fp))!=EOF)
	{
		printf("%c",c);
		
	}
	rewind(fp);
	while((c==fgetc(fp))!=EOF)
	{
		printf("%c",c);
	}
	fclose(fp);
}
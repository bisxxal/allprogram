#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[40];
	puts("enter any string");
	gets(str);
	
	strcpy(str2,str);
	
	puts(str2);
	
	return 0;
}
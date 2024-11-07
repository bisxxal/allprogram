#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	puts("enter any string");
	gets(str);
	
	puts(strrev(str));
	
	return 0;
}
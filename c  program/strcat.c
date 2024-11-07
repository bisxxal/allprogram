#include<stdio.h>
#include<string.h >
int main()
{
	char str1[50],str2[30];
	printf("entrt the first string\n");
	gets(str1);
	printf("enter the second string\n");
	gets(str2);
	strcat(str1,str2);
	puts(str1);
}
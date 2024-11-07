#include<stdio.h>
#include<string.h>

void main()
{
	char a[20],b[20],c[20];
	printf("enter a string\n");
	gets(a);
	printf("enter a string\n");
	gets(b);
if(strcmp(a,b)==0)
printf("two string are equal");
else if (strcmp(a,b)<0)
printf("1 string are greater");
else
printf("2 string are greater");

}
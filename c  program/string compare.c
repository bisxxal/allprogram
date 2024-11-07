#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[40];
	
	puts("enter any string : \n");
	gets(str); //input
	puts("enter any string2: \n");
		gets(str2); //input
	if (strcmp(str2,str)==0)
	    puts("both strings are equal");
	else
	puts("both string are not equal");
	
	return 0;
}
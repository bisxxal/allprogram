#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],str2[40];
	
	puts("enter any string : \n");
	gets(str); //input
	puts("enter any string2: \n");
		gets(str2); //input
		
		strcat(str,str2);
		puts(str);
	return 0;
}
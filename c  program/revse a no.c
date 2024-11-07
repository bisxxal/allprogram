//write a program input a no and reverse it
#include<stdio.h>
void main()
{
	int no,dg,rev=0;
	printf("enter a no");
	scanf("%d",&no);
	while(no>0)
	{
		dg=no%10;
		rev=rev*10+dg;
		no=no/10;
	}
	printf("revrse of a no=%d",rev);
}
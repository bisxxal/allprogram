#include<stdio.h>
void main()
{
	int no,no1,dg,rev;
	printf("enter a no");
	scanf("%d",&no);
	no1=no;
	while(no>0)
	{
		dg=no%10;
		rev=rev*10+dg;
		no=no/10;
	}
	if(rev==no1)
	printf("pallindrop");
	else
	printf("not pallindrop");

}
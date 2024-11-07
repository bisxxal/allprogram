//wap input two no and find out greater among them //no return no agrument
#include<stdio.h>
void rev();
void rev()
{
	int rev=0,n,dg;
	printf("enter a number");
	scanf("%d",&n);
	while(n>0)
	{
		dg=n%10;
		rev=rev*10+dg;
		n=n/10;
	}
	printf("rev of no=%d",rev);
}
void main()
{
	rev ();
}
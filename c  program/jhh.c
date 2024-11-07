#include<stdio.h>
void main()
{
	int fact,no,no1,sum=0,dg;
	printf("Enter a numabe");
	scanf("%d",&no);
	no1=no;
	while(no>0)
	{
		dg=no%10;
		fact=1;
		while(dg>0)
		{
			fact=fact*dg;
			dg=dg-1;
		}
		sum=sum+fact;
		no=no/10;
	}
	if (sum==no1)
	printf("strong");
	else
	printf("not strong");
}
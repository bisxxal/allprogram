#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter a no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		
	}
	if(sum==n)
	{
		printf("p");
	}
	else
	{
		printf("n p");
	}
}
#include<stdio.h>
void main()
{
	int i,n;
	printf("enter numb");
	scanf("%d",&n);
	printf("multiplication of %d is\n",n);
	for(i=1;i<=10;i++)
	{
	
		printf("%d * %d =%d \n",n,i,n*i);
	}
}
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter nwo no");
	scanf("%d%d",&a,&b);
	a=(a+b)-(b=a);
	printf("a=%d,b=%d",a,b);
}
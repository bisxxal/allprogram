#include<stdio.h>
void main()
{
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("enter 2 no\n");
	scanf("%d%d",&a,&b);
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("a=%d\nb=%d",*p,*q);
}
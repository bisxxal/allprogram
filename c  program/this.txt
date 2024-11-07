#include<stdio.h>
void main()
{
	int a,b,c,*p,*q,*r;
	p=&a;
	q=&b;
	r=&c;
	printf("enter 2 no\n");
	scanf("%d%d",&a,&b);
	*r=*p+*q;
	printf("sum=%d",*r);
}
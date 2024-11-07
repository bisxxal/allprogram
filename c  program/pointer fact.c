#include<stdio.h>
void main()
{
	int no,dg,fact=1,*p,*q,*r;
	p=&no;
	q=&dg;
	r=&fact;
	printf("enter a no\n");
	scanf("%d",&no);
	while(*p>0)
	{
		*r=*r*no;
		*p=*p-1;
	}
	printf("%d",*r);
}
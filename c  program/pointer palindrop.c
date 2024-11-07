#include<stdio.h>
void main()
{
	int no,no1,dg,rev=0,*p,*s,*q,*r;
	p=&no;
	q=&no1;
	r=&dg;
	s=&rev;
    printf("enter a no");
	scanf("%d",&no);
	*q=*p;
	while(*p>0)
	{
		*r=*p%10;
		*s=*s*10+*r;
		*p=*p/10;
	}
	if(*s==*q)
	printf("pallindrop");
	else 
	printf("not");
}
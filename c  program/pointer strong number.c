#include<stdio.h>
void main()
{
	int no,no1,dg,fact,sum=0,*p,*s,*q,*r,*t;
	p=&no;
	q=&no1;
	r=&dg;
	s=&sum;
	t=&fact;
    printf("enter a no");
	scanf("%d",&no);
	*q=*p;
	while(*p>0)
	{
		*r=*p%10;
	    *t=1;
		while(*r>0)
		{
			*t=*t**r;
			*r=*r-1;
		}
		*s=*s+*t;
		*p=*p/10;
	}
	if(*s==*q)
	printf("strong number ");
	else 
	printf("not strong ");
}
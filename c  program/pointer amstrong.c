#include<stdio.h>
void main()
{
	int no,no1,dg,sum=0,*p,*s,*q,*r;
	p=&no;
	q=&no1;
	r=&dg;
	s=&sum;
    printf("enter a no");
	scanf("%d",&no);
	*q=*p;
	while(*p>0)
	{
		*r=*p%10;
		*s=*s+*r**r**r;
		*p=*p/10;
	}
	if(*s==*q)
	printf("amstrong");
	else 
	printf("not");
}
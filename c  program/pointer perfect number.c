#include<stdio.h>
void main()
{
	int no,i,sum=0,*p,*q,*r;
	p=&no;
	q=&i;
	r=&sum;
	printf("enter a no");
	scanf("%d",&no);
	for(*q=1;*q<*p;*q++)
	{
		if(*p%*q==0)
		{
			*r=*r+*q;
		}
	}
	if(*r==*p)
	printf("perfect no");
	else
	printf("not ");
}

/*#include<stdio.h>
void main()
{
	int no,i,sum=0,*p,*q,*r;
	p=&no;
	q=&i;
	r=&sum;
	printf("enter a no");
	scanf("%d",&no);
	while(*q<*p)
	{
		if(*p%*q==0)
		{
			*r=*r+*q;
		}
		*q++;
	}
	if(*r==*p)
	printf("perfect no");
	else
	printf("not ");
}*/
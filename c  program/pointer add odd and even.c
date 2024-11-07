#include<stdio.h>
void main()
{
	int i,even=0,odd=1,*p,*q,*r;
	p=&i;
	q=&even;
	r=&odd;
	for(*p=1;*p<=10;*p++)
	{
		if(*p%2==0)
		*q=*q+*p;
		else
		*r=*r*i;
	}
	printf("sum =%d",*q);
	printf("multiplication =%d",*r);
}
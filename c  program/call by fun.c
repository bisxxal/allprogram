#include<stdio.h>
void x(int);
void x(int p)
{
	p=p+1;
	printf("p=%d\n",p);
	
}
void main()
{
	int a=5;
	x (a);
	printf("a=%d",a);
}
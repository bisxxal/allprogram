//wap input two no and find out greater among them //no return no agrument
#include<stdio.h>
void grater();
void grater()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	(a>b)?printf("a is grater"):printf("b is grater");
	
}
void main()
{
	grater ();
}
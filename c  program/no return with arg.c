//wap input two no and find out greater among them //no return with agrument
#include<stdio.h>
void grater(int,int);
void grater(int a,int b)
{
	int c;
    (a>b)?printf("a is grater"):printf("b is grater");
	
}
void main()
{
	int a,b;
	printf("enter two number");
	scanf("%d%d",&a,&b);
	grater (a,b);
}
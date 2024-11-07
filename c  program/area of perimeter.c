#include<stdio.h>
void main()
{
	int l,b,area,perimeter;
	printf("enter tne lenth and breath");
	scanf("%d%d",&l,&b);
	area=l*b;
	printf("area=%d",area);
	perimeter=2*(l+b);
	printf("perimeter=%d",perimeter);
	
}
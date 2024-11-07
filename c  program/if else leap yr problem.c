#include<stdio.h>
void main()
{
	int yr;
	printf("enter a yr");
	scanf("%d",&yr);
	if((yr%4==0)&&(yr%100!=0)!!(yr%400==0))
	{
		printf("leap yr");
	}
	else
	{
		printf("not a leap yr")
	}
}
#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("enter the range\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%d",a[i][j]);
		printf(" \n");
	}
}
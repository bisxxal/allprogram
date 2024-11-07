#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	printf("enter the data into an array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",a[i][j]+b[i][3]);
		}
		printf("\n");
	}
}
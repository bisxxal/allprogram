#include<stdio.h>
int main()
{
	int a[3][3],i,j,b[3][3];
	printf("enter the data into an array\n");
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
			printf("%d",a[i][j]-b[i][j]);
		}
		printf(" \n");
	}
	return 0;
}
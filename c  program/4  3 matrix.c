#include<stdio.h>
void main()
{
	int a[4][3],i,j;
	printf("enter the data into an array");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		printf("4*3 matrix=%d",a[i][j]);
		printf("\n");
	}
	
}
#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	printf("enter the data into an array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;i++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;i++)
		printf("%d",a[i][j]);
		printf("/n");
	}
}
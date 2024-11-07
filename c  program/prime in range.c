#include <stdio.h>
void main()
{
	int i,n,j,count=0;
	printf("enter the maximum range");
	scanf("%d",&n);
	printf("all the prime numbers from 1 to %d are \n ",n);
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count ++;
		}
		if(count==2)
		printf("%d\t",i);
		count =0;
	}
}
//keep traying as input from user until enter put an odd number


#include<stdio.h>
void main()
{
	int n;
	do
	{
		printf("enter the number ");
		scanf("%d",&n);
		printf("%d \n",n);
		if(n%2!=0)
		{
			break;
	}
	}
	while (1);
	printf("thank you");
}
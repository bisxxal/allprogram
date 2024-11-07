#include<stdio.h>
void main()
{
	int i,n1,n2,HCF,LCM;
	printf("enter a no1");
	scanf("%d",&n1);
	printf("enter a no2");
	scanf("%d",&n2);
	for(i=1;i<=1;i++)
	{
		if(n1%i==0&&n2%i==0)
		{
			HCF=i;
		}
		LCM=(n1*n2)/HCF;
		printf("the HCF is %d",HCF);
		printf("the ICM is %d",LCM);
    }
	}
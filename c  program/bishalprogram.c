#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,avgm;
	printf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avgm=(m1+m2+m3+m4+m5)/5;
	printf("avgm=%d",avgm);
	if(avgm>=90)
	printf("grade=a");
	else if(avgm>=70)
	printf("grade=b");
	else if("avgm>=60")
	printf("grade=c");
	else if("avgm>=50")
	printf("grade=d");
	else
	printf("fail");
	}
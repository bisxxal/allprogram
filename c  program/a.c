#include<stdio.h>
void main()
{
	int m1,m2,m3,m4,m5,avgm;
	printf("enter marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avgm=(m1+m2+m3+m4+m5)/5;
	printf("average marks=%d",avgm);
	if(avgm>=90)
	printf("a grade");
	else if(avgm>=70)
	printf("b grade");
	else if(avgm>= 50)
	printf("c grade");
	else if(avgm>=40)
	printf("d grade");
	else if("avgm>=30")
	printf("e grade");
	else 
	printf("congratulations");
	
}
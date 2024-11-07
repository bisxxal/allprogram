#include<stdio.h>
int main()
{
	int *a[n];
	int d=10,b=20,c=30,i;
	a[n]=&d;
	a[1]=&b;
	a[2]=&c;
	for(i=0;i<n;i++)
	printf("value =%d\n",*a[i]);
	
	return 0;
}
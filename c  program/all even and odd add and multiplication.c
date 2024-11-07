#include<stdio.h>
void main()
{
	int i=1,even=0,odd=1;
	while(i<=45)
	{
		if(i%2==0)
		even=even+i;
		else
		odd=odd;
		i++;
	}
	printf("sum of even no =%d",even);
	printf("multiplication of odd no=%d",odd);
}
#include<stdio.h>
#include<math.h>
float squreArea (float side);
float CirclrArea(float rad);
float retanglearea(float a,float b);

int main()
{
	float a=5.0;
	float b=10.0;
	printf("are is %d",retanglearea(a,b));
	return 0;
	
}
float squreArea (float side)
{
	return side*side;
}
float circlrarea (float rad)
{
	return 3.14*rad*rad;
}
float retanglearea (float a,float b)
{
	return 0;
}
#include<iostream>
using namespace std;
void sum(int*, int*);
int main()
{
	int m=5,n=10;
	cout<<m<<"\t"<<n<<endl;
	sum(&m,&n);
	cout<<m<<"\t"<<n<<endl;
return 0;
}
void sum(int *a,int *b){
	
//	int sum=0
	*a=15;
	*b=40;
	cout<<a<<"\t"<<b<<endl;
}

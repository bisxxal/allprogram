#include<iostream>
using namespace std;
int sum(int x, int y);
int main()
{
	cout<<sum(10,15)<<endl;
return 0;
}
int sum(int x,const int y){
//	y=x+y;
	return (x+y);
}
 
#include<iostream>

using namespace std;
class dist{
	int meter ;
	public:
		friend int getfun(dist);		
};
int getfun(dist d){
	
	d.meter=0;
//	cin>>d.meter;
	d.meter+=5;
	return d.meter;
}
int main(){
	dist d;
cout<<"distance is:"<<getfun(d);
return 0;
}
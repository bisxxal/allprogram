#include<iostream>
using namespace std;

class myclass{
		public:
int a,b;
	myclass(int m,int n){
		
		a=m;b=n;
	}
	void putdata(){
		cout<<"a is ="<<a<<endl<<"b is="<<b;
	}
};
int main(){
	int x,y;
	cout<<"enter two no"<<endl;       //this is not compelsory this is user input
	cin>>x>>y;
		myclass obj(x,y);
		obj.putdata();
	return 0;
}
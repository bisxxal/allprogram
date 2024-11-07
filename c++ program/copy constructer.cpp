#include<iostream>
using namespace std;

class myclass{
	int a,b;
	public:
		myclass(int x,int y){
			a=x;
			b=y;
			
		}
		myclass(myclass &obj){
			a=obj.a;
			b=obj.b;
		}
		void putdata(){
			cout<<"a ="<<a<<endl<<"b="<<b<<endl;
		}
};
int main(){
	myclass obj(12,45);
	myclass obj2=obj;
	obj.putdata();
	return 0;
}
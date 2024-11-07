
#include<iostream>
using namespace std;
class B;
class A{
	int a;
	public:
		void getdata(){
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>a;			
		}
		friend void myfrind(A ,B);
};
class B{
	int b;
	public:
		void putdata(){
		cout<<"ENTER THE NUMBER"<<endl;
		cin>>b;			
		}
		friend void myfrind(A,B);
};
void myfrind(A obj,B obj2)
{
	if(obj.a>obj2.b)
	cout<<"max is "<<obj.a<<endl;
	else
	cout<<"max is "<<obj2.b;
}
int main(){
A obj;
B obj2;
obj.getdata();
obj2.putdata();
myfrind(obj,obj2);

	return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;
class parent{
	protected:  
	int a;
	public:
		void putdata(){
			cout<<"enter the data";
			cin>>a;

		}
};
class parent2{
	protected:  
	int c;
	public:
		void calldata(){
			cout<<"enter the data";
			cin>>c;

		}
};
class child:public parent,public parent2{
	protected:  
	int b;
	public:
		void getdata(){
			cout<<"enter the data";
			cin>>b;
		}
		void display(){
		
			cout<<"no is "<<a+b+c;
		}
};
int main(){
   child obj;
   obj.putdata();
   obj.calldata();
   obj.getdata();
   obj.display();

    return 0;
}
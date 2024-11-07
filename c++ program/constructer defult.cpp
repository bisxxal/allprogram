 #include<iostream>
using namespace std;

class myclass{
		public:
int a,b;
	myclass(){
		a=10;b=120;
		cout<<a+b<<endl;
	}
};
int main(){
		myclass obj;
		cout<<"a is="<<obj.a<<endl<<"b is ="<<obj.b;      // we can acces though an obj also
	return 0;
}
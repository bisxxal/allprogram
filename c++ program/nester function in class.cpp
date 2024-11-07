//squre of cube and squre
#include<iostream>
#include<fstream>
using namespace std;
class sq{
	int a ;
	public:
		void input(){
			cout<<"enter the no"<<endl;
			cin>>a;	
		}
		int squre(){
		return a*a;	
		}
		int cube(){
		return a*a*a;	
		}
		void getdata(){
//			int ss,sl;
			int sl=cube();
			int ss=squre();
			cout<<"cube is "<<sl<<endl;
			cout<<"cube is "<<ss<<endl;
		}	
};
int main(){
	sq obj;
	obj.input();
	obj.getdata();
}
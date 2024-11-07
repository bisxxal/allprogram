#include<iostream>
#include<fstream>
using namespace std;
class first{
	int no;
	 char carmodel[10]; 
	public:
		void getdata(){
cout<<"entert the car nuber"<<endl;
cin>>no;
cout<<"ente the carnamer\n";
cin>>carmodel;	
		}
		void putdata(){
			cout<<"car no is :"<<no;
			cout<<"car name is :"<<carmodel;
		}
};

int main(){
	first obj;
	obj.getdata();
	obj.putdata();
	return 0;
}
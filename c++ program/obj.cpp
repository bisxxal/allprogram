#include<iostream>
using namespace std;

class myclass{
	
	public:
		int rollno;
		string name;
};

int main(){
	
	myclass obj;
	obj.rollno=25;
	obj.name="bisxxal";
	cout<<obj.rollno<<endl;
	cout<<obj.name;
}
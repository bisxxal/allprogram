#include<iostream>
#include<iomanip>
using namespace std;
class A{
	protected:
	int roll;
	public:
		void putdata(){
		cout<<"enter the roll number"<<endl;
		cin>>roll;
		}
	
};
class test:public A{
	protected:
	int mark1,mark2;
	public:	
	void getdata(){
	
		cout<<"Enter Marks "<<endl;
		cout<<"mark 1=";
		cin>>mark1;
		cout<<"mark2="<<endl;
		cin>>mark2;
	}
};
class sports{
	protected:
	int score;
	public:
		void third(){
		cout<<"enter sports score"<<endl;
		cin>>score;
	}
};
class result:public sports,public test{
	protected:
	int total;
	public:
		void display(){
			
			total=score+mark1+mark2;
			cout<<"total marks is "<<total;
		}
	
};
int main(){
	result obj1;
	obj1.putdata();
	obj1.getdata();
	obj1.third();
	obj1.display();
    return 0;
}
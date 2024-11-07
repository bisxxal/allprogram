#include<iostream>
using namespace std;
int count=0;
class myclass{
  public:
  
  	myclass(){
  		count++;
  		cout<<"no of des"<<count<<endl;
	  }
	~myclass(){
  		
  		cout<<"deleteing no of des"<<count<<endl;
		  count--;
	  }
};
int main(){
    myclass obj,obj1,obj2;
    {
    	myclass obj4;
	}
    return 0;
}
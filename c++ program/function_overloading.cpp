#include<iostream>
using namespace std;

class myclass{
  int a,b;
  public:
  void display(int a, int b ){
     
    cout<<"Sum = "<<a+b<<endl;
  }
   double  display(int x,int y,int z ){
    
    cout<<" area is = " << x*y*z <<endl;
  }
};
 
int main(){
   myclass obj1 ;
  obj1. display(1,2 );
   obj1. display(1,2,4);
    return 0;
}
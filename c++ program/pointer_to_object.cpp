#include<iostream>
using namespace std;

class myclass{
  int a,b;
  public:
  int putdata (){
    cout<<"enter a number";
    cin>>a;
    cout<<"a ="<<a;

  }
  
};


int main(){
    myclass obj;
    myclass *p;
    p=&obj;

    p->putdata();
    return 0;
}
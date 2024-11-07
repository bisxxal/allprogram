#include<iostream>
using namespace std;

class myclass{
     protected:
  
  public:
  int a;
  int display(){
    cout<<"i am in bass class "<<endl<<"Enter The Valu Of A"<<a;
    cin>>a;
    cout<<"a ="<<a;
  }
};

class derived:public myclass{
    protected:
    
    public:
    int b;
    void display(){
    cout<<"enter value of a and b"<<endl<<"a="<<a<<endl<<"b="<<b;
    }
};

int main(){
//    derived obj;
//    derived *p;
//    p=&obj;
//    p->display();

   myclass obj2;
   myclass *q;
   q=&obj2;
   q->q=45;
   q->display();
    return 0;
}
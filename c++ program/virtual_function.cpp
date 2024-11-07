#include<iostream>
using namespace std;

class myclass{
  public:
 virtual  void show()
  {
    cout<<"base classe"<<endl;
  }

};
class yourclass:public  myclass{
public:

    void show(){
        cout<<"i am in derived class"<<endl;
    }

};
int main(){
    myclass *p;
    yourclass obj;
    p=&obj; 
    p->show( );      // this is call base class by virtual class
     obj.show();    //this call derived class
    return 0;
}
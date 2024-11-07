#include<iostream>
using namespace std;

class myclass{
  public:
 virtual  void show()=0;
 

};
class yourclass:public  myclass{
public:

    void show(){
        cout<<"i am in derived class"<<endl;
    }

};
int main(){
    yourclass obj;   
     obj.show();  
    return 0;
}
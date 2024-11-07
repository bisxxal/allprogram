#include<iostream>
using namespace std;
class base{
    int a=54;
    public:
   virtual void display(){
      
        cout<< a<< " am in base class"<<endl;
    }
};

class derived : public base{
    int b ;
    public:
    void display(){
        b=23;
        cout<< b<< " i am in derived class "<< endl;

    }
};
int main( ){
 base *a;  
    derived b;  
    a = &b;  
   a->display();  
    return 0;  
}
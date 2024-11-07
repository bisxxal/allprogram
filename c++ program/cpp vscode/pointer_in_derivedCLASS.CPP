#include<bits/stdc++.h>
using namespace std;
class base {
     public:
   int a;
    void display(){
        cout<< "in base class A =" << a<<endl;
    }
};

class derived: public base{
public:
int b;
    void display(){
 cout<< "in derived class A =" << a<<endl;
 cout<< "in derived class B =" << b<<endl;
    }
};
int main( ){
base obj;
base *ptr;
derived obj2;
ptr=&obj2;
ptr->a=90;                // assign a value in uuse of pointer
 
ptr->display();
// derived class dislay
derived *ptrd;
ptrd=&obj2;

ptrd->b=65;               // assign a value in uuse of pointer
ptrd->display();
// obj2.display();      we can also display as this way 
return 0;
}
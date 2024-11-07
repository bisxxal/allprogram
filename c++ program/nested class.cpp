#include <iostream>
using namespace std;
class A {
   public:
   class B {
       int a;
   public:
   void display(){
   	cout<<"enter a number"<<endl;
       cin>>a;
       cout<<"nuber is "<<a<<endl;
   }
   };
};

int main(){
   A::B obj;
   obj.display();
   return 0;
}
#include <iostream>
using namespace std;
class myclass 
{
  protected:
  int  a ;
  public:
  void putdata ( )
  {
    a=23;
  }
  
};
class myclass2 {
  protected:
  int   b;
  
  public:
  void getdata( ){
    b=34;
  }
  
};
class derived : public myclass,public myclass2 {
    public:
   void show(){
     
     cout<< a<<" "<<b<<" "<<a+b;
   }
};
int main() 
{
   myclass obj;
   myclass2 obj2;
   
   obj.putdata();
   obj2.getdata();
   
   derived obj3;
   obj3.show();
    return 0;
}
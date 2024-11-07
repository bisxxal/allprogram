#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int a;    
   public:
   void getdata(){
    cout<<"enter a no"<<endl;
    cin>>a;
   }
   void putdata(){
    cout<<"value is "<<a;
   }
   Test operator * (Test obj2){
    Test obj3;
    obj3.a=a*obj2.a;
    return obj3;
   }
};    
int main()    
{    
    Test obj,obj2,obj3;
    obj.getdata();
    obj2.getdata();
    obj3=obj2*obj;                //operater overloading 
    // obj.putdata();
    // obj2.putdata();
    obj3.putdata();
    return 0;    
}
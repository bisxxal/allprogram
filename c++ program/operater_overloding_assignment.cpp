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
   void operator += (Test obj2){
            a=a+obj2.a;
   }
};    
int main()    
{    
    Test obj,obj2;
    obj.getdata();
    obj2.getdata();
    obj +=obj2;            //oprater overloding
    obj.putdata();
    return 0;
}
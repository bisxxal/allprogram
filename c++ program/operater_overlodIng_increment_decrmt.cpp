                                 //prefix increment overloding

// #include <iostream>    
// using namespace std;    
// class Test    
// {    
//    private:    
//       int a;    
//    public:
//    void getdata(){
//     cout<<"enter a no"<<endl;
//     cin>>a;
//    }
//    void putdata(){
//     cout<<"value is "<<a;
//    }
//    Test operator ++(){
//     a=a+1;
//    }
// };    
// int main()    
// {    
//     Test obj;
//     obj.getdata();
//     cout<<"original value is "<<endl;
//     obj.putdata();
    
//     ++obj;               //operater overloading 
//     cout<<"after overloding value is "<<endl;
//     obj.putdata();
//     return 0;    
// }

// postfix operater

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
   Test operator ++(int){
    a=a+1;
   }
};    
int main()
{    
    Test obj;
    obj.getdata();
    cout<<"original value is "<<endl;
    obj.putdata();
    
    obj++;               //operater overloading 
    cout<<"after overloding value is "<<endl;
    obj.putdata();
    return 0;    
}
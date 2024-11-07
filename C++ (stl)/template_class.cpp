#include <iostream>  
using namespace std;  
template<class T >  
class A   
{  
    public:  
    T num1 = 56;  
    T num2 = 6;  
    T2 var='b';
    T2 var2='g';
    void add()  
    {  
        cout << "Addition of num1 and num2 : " << num1+num2<<endl;  
    }  
       void show()  
    {  
        cout <<"var1 "<< var<<endl<< "var2=" <<var2<<endl;  
    }  
};  
  
int main()  
{  
    A<int> d;
    A<char> d1;
    d.add(); 
    d1.show(); 
    return 0;  
}  
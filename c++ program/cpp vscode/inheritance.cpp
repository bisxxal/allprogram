// ********************************************************      MULTIPUL INHERITANCE 

// #include <iostream>  
// using namespace std;  
// class A  
// {   public: 
    
//      int a=34;  

// };  
  
// class B  
// {  
//    public: 
//     int b=324;  
  
// };  
// class C : public A,public B  
// {  
//    public:  
//     C()  
//     {  
//         std::cout << "The value of a is : " <<a<< std::endl;  
//         std::cout << "The value of b is : " <<b<< std::endl;  
//         cout<<"Addition of a and b is : "<<a+b;  
//     }  
// };  
// int main()  
// {  
//    C c;  

//     return 0;  
// }  

#include<bits/stdc++.h>
using namespace std;
class A{
public:
int a=23;
};

class B: public A{
    public:
int b=56;
 int x=a+b;
 
};

class C{
    public:
  int c=67;
 
};

class D: public C{
    public:
    int d=56;
    int y=c*d;
};

class E:public B,public D{
    public:
void display(){
    cout<< x+y<<endl;
}
};
int main( ){
E obj;
obj.display();
cout<<"b="<<obj.b;
return 0;
}
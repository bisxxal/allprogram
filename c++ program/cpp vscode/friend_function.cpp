// #include<iostream>
// using namespace std;

// class myyclas{
//     int a,y ;
// public:
// friend int myfun (myyclas);
// };

// int myfun (myyclas obj1){
//     cin>>obj1.a>>obj1.y;
//     return obj1.a*obj1. y*obj1.  a;
// }

// int main( ){
// myyclas obj1;
// cout<<"area is "<<myfun(obj1);
// return 0;
// }

#include<iostream>
using namespace std;
class B ;
class A{
    int a= 2;
    public:
    friend void  myfun( A,B);
};
class B{
    int b=5;
    public:
    friend void myfun( A,B);
};

void  myfun(A obj1 ,B obj2 ){
    if (obj1.a>obj2.b)
    cout<< "a is grater";
    else 
    cout<< "B is grater";
}
int main( ){
A obj1;
B obj2;
myfun (obj1 ,obj2 );
return 0;
}
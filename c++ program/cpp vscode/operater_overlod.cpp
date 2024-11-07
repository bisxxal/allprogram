// #include<bits/stdc++.h>
// using namespace std;
// class myclass {
// int a;
// public:
// void getdata(){
//     cout<<"enter A value :"<<endl;
//     cin>>a;
    
// }
// void show(){
//     cout<< "A value is "<< a<<endl;
// }
//  myclass operator * (myclass obj2){
//     myclass obj3;
//     obj3.a=a*obj2.a;
//  }
// };
// int main( ){
// myclass obj1,obj2,obj3;
// obj1.getdata();
// obj2.getdata();
// cout<<"value of obj1 :";
// obj1.show() ;
// cout<<"value of obj2 :";
// obj2.show();
// obj3=obj1*obj2;
// obj3.show();
// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// class myclass {
// int a,b;
// public:
// myclass(int x,int y): a(x),b(y){

// }
// myclass ():a(),b(){}
// myclass operator +(myclass obj){
//     myclass temp;
//     temp.a=a+obj.a;
//     temp.b=b+obj.b;
// }
// void show(){
//     cout<< "A value is "<< a<<endl;
//     cout<< "B value is "<< b<<endl;
// }
// };
// int main( ){
// myclass obj1(12,3);
// myclass obj2(1,2);
// myclass obj3;

// obj3=obj1+obj2;
// obj3.show();
// return 0;
// }

// --------------------------------------------- OVERLODING ++ OPEATOR AND -- OPERATOR ------------------------------------------
#include<bits/stdc++.h>
using namespace std;
class myclass {
int a;
public:
void getdata(){
    cout<<"enter A value :"<<endl;
    cin>>a;
     
}
void show(){
    cout<< "A value is "<< a<<endl;
}
 myclass operator ++(int ){    // in postfix operaeter we use int as argument
   a++;
     
 }
  myclass operator ++(){ 
  a=++a;
 }
};
int main( ){
myclass obj1,obj2 ;
obj1.getdata();
 
cout<<"te original value of obj1 :";
obj1.show() ;
cout<<"value of postfix :";
 
obj1++;  // postfix call
obj1.show() ;
cout<<"value of prefix :";
++obj1;
obj1.show();
 
return 0;
}
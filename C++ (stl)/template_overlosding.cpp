#include<iostream>
using namespace std;
void myfun(int a){
    cout<<"i am fun () "<<a<<endl;
}
template<class T>
void myfun(T a){
    cout<<"i am in template  "<<a<<endl;
}

template<class T>
void myfun2(T a){
    cout<<"i am in template 2 "<<a<<endl;
}
int main(){
  myfun(34);
  myfun2(356);
return 0;
}
#include<iostream>
using namespace std;
template<class T>
void show (T a,T b){
    cout<<"a=-"<<a<<endl<<"b="<<b<<endl;
}
int main(){
int p=23,q=56;
float g=5.67,f=54.34;
char ch='r',bh='h';
 show (p,q);
 show (ch,bh);
 show (g,f);

return 0;
}
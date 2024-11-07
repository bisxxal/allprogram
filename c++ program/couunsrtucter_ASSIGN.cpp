#include<bits/stdc++.h>
using namespace std;
class base{
  
    int a;
      int  b;
    public:
    base(int x,int  y)  :  b(y ),a(x+b)
    {
// a=x,b=y;
        cout<< "constructre called"<<endl;
        cout<< "a="<<a<<endl<<"b="<<b<<endl;
    }
};
int main( ){
base obj(54,98);
return 0;
}    
#include<iostream>
using namespace std;
class complex{
    int r,i;
    public:
     complex() {
          
         r= 0;i = 0;
      }
 complex(int real ,int img): r(real),i(img){}   // paramitrize complex number 
    void putdata(){
        cout<< r<<" " <<"+ " <<i<<+"i"<<endl;
        }
    complex operator +(complex C){
        complex temp;
       temp.r=r+C.r;
       temp.i=i+C.i;
       return temp;
    }
 complex operator /(complex C){
        complex temp;
       temp.r=r/C.r;
       temp.i=i/C.i;
       return temp;
    }
    
};

int main(){
complex obj(3,78),obj2(89,45);
complex  obj3 ,obj4;
obj3=obj+obj2;
obj3.putdata();
obj4=obj/obj2;
obj4.putdata();
return 0;
}
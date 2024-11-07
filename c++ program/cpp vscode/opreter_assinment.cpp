#include<bits/stdc++.h>
using namespace std;
class mycls{
    int a;
    public:
        void putdata(){
            cout<<"enter A value"<<endl;
            cin>>a;
        }
        void show(){
            cout<<"A value is :"<< a<<endl;
        }
 // -------------------------------------------  = overlode      
        // mycls operator = (mycls demo){
 
        //     a=demo.a;
        // } 
// -------------------------------------------  += overlode
        mycls operator +=(mycls demo){
                a+=demo.a;
        }
};
int main( ){
mycls obj ,obj2;
// for = overlod
// obj.putdata();
// obj2=obj;
// obj.show();
// obj2.show();

// for += overlode

obj.putdata();
obj2.putdata();
obj2+=obj;
obj2.show();
return 0;
}
#include<iostream>
#include <utility>  
using namespace std;
int main( ){
        ///swap();

        pair<int , string>p(3,"bisxxal");
        pair<int , string>p2(19,"gudul");
cout<<"before swap : "<<endl;
        cout<<p.first<<" "<<p.second<<endl;
        cout<<p2.first<<" "<<p2.second<<endl;
cout<<"after swap : "<<endl;
        
        p.swap(p2);
        cout<<p.first<<" "<<p.second<<endl;
        cout<<p2.first<<" "<<p2.second<<endl;

}
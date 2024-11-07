#include<iostream>
#include <utility>  
using namespace std;
int main( ){
        // pair<int ,string>p;
        // p={32,"bisxxal"};
        // p=make_pair(2,"Asdgvvjnva");   ///this is anothr method 
        // cout<<p.first<<endl<<p.second;

        //make_pair()

        pair<int ,string> p1(23,"gugu");
        pair<double,char>p2;
        pair<float, char>p3;

  // initilize pair 2
p2=make_pair(23.23,'v');
// initilize pair 3
p3.first=34.3;p3.second='g';
        cout<<"1 pair is "<<p1.first<<"  "<<p1.second<<endl;
        cout<<"2 pair is "<<p2.first<<"  "<<p2.second<<endl;
        cout<<"3 pair is "<<p3.first<<"  "<<p3.second<<endl;

return 0;
}

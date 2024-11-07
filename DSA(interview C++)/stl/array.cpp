#include<bits/stdc++.h>
using namespace std;
int main( ){
array<int ,5>a={1,2,3,4,5};

cout<< a.size()<<endl;
cout<< "3rd index value is : "<< a.at(3)<<endl;
for(auto val:a){
    cout<< val<< " ";
}
cout<< "at end :"<< a.back()<<endl;
cout<< "at Front  :"<< a.front();
return 0;
}
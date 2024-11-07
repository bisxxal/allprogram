#include<bits/stdc++.h>
using namespace std;
int main( ){
vector<int >v={1,2,5,5,7,9};
 //--------------------------------LOWWER BOUND---------------------------
// auto val = lower_bound(v.begin(),v.end(),5);
// auto val1 = lower_bound(v.begin(),v.end(),10);  //if the vallue is not present the ther no bigger value in vector it will take the next value adress
// auto val2 = lower_bound(v.begin(),v.end(),6);

 //--------------------------------UPPER BOUND---------------------------

auto val = upper_bound(v.begin(),v.end(),5) ;
auto val1 = upper_bound(v.begin(),v.end(),10);  //if the vallue is not present the ther no bigger value in vector it will take the next value adress
auto val2 = upper_bound(v.begin(),v.end(),2);
cout<<*val<<endl;
cout<<*val1<<endl;
cout<<*val2<<endl;
return 0;
}
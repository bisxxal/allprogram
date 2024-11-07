#include<bits/stdc++.h>
using namespace std;
int main( ){
unordered_map<string , int> m;

//insertion
pair<string , int> p = make_pair("bisxxal" , 3);
m.insert(p);
pair<string , int> p2 = make_pair("hello" , 23);
m.insert(p2);

//3
m["gugu" ] =1;

// search 

cout<< m["gugu"]<<endl;
cout<< m.at("hello")<<endl;
//unknown entrety
cout<< m["unknow entry"]<<endl;
cout<< m.at("unknow entry")<<endl;
cout<<"Size is :"<< m.size()<<endl;

//cheak present 
cout<<"Count is : "<< m.count("bro")<<endl;
// erase the starem,ent 

m.erase("unknow entry" );
cout<<"Size is :"<< m.size()<<endl;



//printing keys==>
 for (auto x : m)
    cout << x.first << " " << 
            x.second << endl;
 
return 0;
}
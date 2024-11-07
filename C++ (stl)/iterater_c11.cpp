#include<iostream>
#include<vector >
using namespace std;
int main( ){
    vector <int > v={3,5,6,77,5,3,2,32 };
    for(int value : v){
        value++;
        cout<<value<<" "<<endl;     //this one is copy of value 
    }

    // when you want real value so we use reference using ( & )
     for(int &value : v){
        value++;
        cout<<value<<" ";     
    }

    vector<pair<int ,int >> gb =  {{1,2},{3,4},{5,6},{7,8}};

    for(pair<int ,int >&value : gb){
        
        cout<<value.first<<" "<<value.second;    
    }
return 0;
}
#include<iostream>
#include<vector>
using namespace std;
void display(vector<pair<int ,int >>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second;
    }
cout<<endl;
}
int main(){

    vector<pair<int ,int>>v={{1,2},{2,3},{4,5}};
display(v);
}
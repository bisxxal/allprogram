#include<iostream>
#include<vector>
using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"displaying the vector"<<endl;
    for (int i=0;i< v.size();i++){
        cout<<v[i]<<" ";
        
    }
    // cout<<endl;
}
int main(){
    vector<int> vec1;

    display(vec1);
    vector<char> vec2(4);
    vec2.push_back('4');
      display(vec2);
    vector<char> vec3(vec2 );
      display(vec3);
    vector<int> vec4(6,100);
      display(vec4);
    // cout<<"enter the size  of vector"<<endl;
    // cin>>size;
    // for (int i=0;i<size;i++){
    //     cout<<"enter the element add to this vector "<<endl;
    //     cin>>element;
    //     vec1.push_back(element );
    // }
    // vec1.pop_back();                      ///this is used to delete the last element of the vector 


    // display(vec1);

    //insert function 

    // vector<int>:: iterator iter=vec1.begin();
    // vec1.insert(iter+3,10,34334);
    // display(vec1);
return 0;
}
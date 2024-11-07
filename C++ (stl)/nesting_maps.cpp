// #include<bits/stdc++.h>
// using namespace std;
// int main( ){

// map<set<int> ,int > m;
// set<int>p1,p2 ;
// p1={14,34,45};
// p2={14,34,354,45};
// cout<<(p1<p2)<<endl;
// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{

    map<pair<string, string>, vector<int>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str1, str2;
        int count;
        cout <<"entrer stering"<<endl;
        cin >> str1 >> str2 ; 
        cout<<"enter count "<<endl;
        //for vector input
        cin>>count;
        for (int j=0;j<count ;j++){
            int x;
            cin>>x;
            // insert in map
            m[{str1,str2}].push_back(x);

        }
    }
    // printing the map 
    for(auto &pr: m){             //hear m is a key of pair  
        auto &full_name = pr.first;
        auto &list=pr.second;
        cout<< full_name.first<<" "<< full_name.second;
        //for vector output 
        cout<< list.size ()<<endl;
        for(auto &element : list){
            cout<<element <<" ";
        }
        cout<<endl;
    }
    return 0;
}

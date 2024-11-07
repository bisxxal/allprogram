#include<bits/stdc++.h>
using namespace std;
 
int main( ){
  int a,n;
vector<pair<string ,int >>v;

v.push_back (make_pair("gudul",23));
v.push_back (make_pair("bisxxal",19));
v.push_back (make_pair("GUGU  ",23));
 
for(auto &val:v)
cout<<val.first<<" "<<val.second<<" "<< endl;
 
return 0;
}


// ---------------------------------------------- vector of map -------------------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
 
// unordered_map<int ,string>m;
// m[0]="bisxxal";
// m[1]="biswajit";
// m[2]="goutam";

//   vector<pair<int, string>> v;


//  for(auto i : m)   //inserting map values into vector
//   {
//       v.push_back(make_pair(i.first,i.second));
//   }
//  sort(v.begin(),v.end() );
//   for (auto &val : v)  
 
//     cout << val.first<< " "<< val.second<< endl;

//   return 0;
// }
 

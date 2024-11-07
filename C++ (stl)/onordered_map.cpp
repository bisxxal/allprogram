// #include <bits/stdc++.h>
// using namespace std;  
// int main()  
// {  
 
//     unordered_map<string, double>umap = { 
// {"one", 1},  
// {"two", 2},  
// {"two", 2},
//  {"three", 3} ,
// {"two", 2},  
// {"two", 2},  
// {"two", 2}
  
// };  
// umap["the value of pi"] = 3.14;  
// umap["the value of root2"] = 1.414;  
// umap["the value ofroot3"] = 1.732;  
// umap["the value oflog10"] = 2.302;

// umap["the value ofloge"] = 1.0;  
  
// // inserting value by insert function  
// umap.insert(make_pair("e", 2.718));  
  
// string key = "the value of pi";

// if (umap.find(key) == umap.end())  
// cout<< key <<" cannot retrieved\n\n";  

// else  
// cout<< "retrieved "<< key << "\n\n";  

// cout<< "\nthe entire elements : \n";  
// for (auto &val:umap)  
// {  
  
// cout<<val.first << " " <<val.second <<endl;  
//     }  
// return 0;  
// }




//*******************It is a c++ program to find rhefreqency of it ,in this we will use of unordered_map of every word **************  
// #include <bits/stdc++.h>  
// using namespace std;  
  
// void printfrequencies(const string &str)  
// {  
// unordered_map<string, int>unrd;  

// stringstream ss(str);  
  
// string word;  
// while (ss>> word)  
// unrd[word]++;  
 
// for (auto &val:unrd )  
// cout<< "(" << val.first << ", " <<val.second << ")\n";  
// }  
  
// int main()  
// {  
// string str = "java t points questions "  
//  "learn programs";  
// printfrequencies(str);  
// return 0;  
// }  
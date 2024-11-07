// #include<iostream>
// using namespace std;
 
// int main( ){
// int arr[23]={1,1,3,2,4,2,3};
// int n=7;
//  	int ans = 0;
    
//     for(int i = 0; i<n; i++) {
//         ans = ans^arr[i];
//     }

// cout<<ans;
// return 0;
// }
 
 #include <iostream>
using namespace std;

int main() {

int arr[23]={1,1,3,2,4,2,3};
int n=7;
 	int ans = 0;
    
    for(int i = 0; i<n; i++) {
        ans = ans^arr[i];
    }
    
    for(int i = 1; i<n; i++) {
        ans = ans^arr[i];
    }

cout<<ans;
}
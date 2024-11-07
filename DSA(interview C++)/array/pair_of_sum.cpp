//  #include <iostream>
// using namespace std;

// int main() {

// int arr[23]={1,2,3,4,5,6,7};
// int n=7;
//  	 int key=9;
//     for(int i = 0; i<n; i++) {
//       for(int j=i+1;j<n;j++){
   
//         if ( arr[i]+arr[j]==key){
//            cout<< arr[i]<<" "<<arr[j]<<endl;
//         }
//       }  
//     }
 
// }

 #include <bits/stdc++.h>
using namespace std;

int main() {

int arr[23]={5, 8, 5,1,2, 7, 8, 10}; 
int n=7  , count ;
   sort(arr,arr+n);

    for(int i = 0; i<n; i++) {
        count=1;
        while(i<n-1&&arr[i]==arr[i+1]){
             i++;
            count++;
        }
cout << arr[i] << "->" << count << endl;
    }
 
}
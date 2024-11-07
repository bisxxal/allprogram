
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
#include<bits/stdc++.h>
using namespace std;
bool knows(int arr[4][4],int a, int b) {   
    if(arr[a][b] == 1)
            return true;
        else
            return false; }
int celebrity(int arr[4][4],int n){

      stack<int> s;
        //step1: push all element in stack
        for(int i=0; i<n; i++) {
            s.push(i);
        }   
        
        //step2: get 2 elements and copare them
        
        while(s.size() > 1) {
            
            int a = s.top();
            s.pop();
            
            int b = s.top();
            s.pop();
            
            if(knows(arr,a,b)){
                s.push(b);
            }
            else
            {
                s.push(a);
            }
        }
        // step 2;

//   int C = s.top();
//     s.pop();
 
    // // Check if C is actually
    // // a celebrity or not
    // for (int i = 0; i < n; i++) {
    //     // If any person doesn't
    //     // know 'C' or 'C' doesn't
    //     // know any person, return -1
    //     if ((i != C) && (knows(arr,C, i) || !knows(arr,i, C)))
    //         return -1;
    // }
 
    // return C;
    
        int candidate = s.top();

    for (int i = 0; i < n; i++) {
        if (i != candidate) {
            if (arr[i][candidate] == 0
                || arr[candidate][i] == 1)
                return -1;
        }
    }
    // if we reach here this means that the candidate
    // is really a celebrity
    return candidate;
}
   
int main( ){

    int arr[4][4] ={{ 0, 0, 1, 0 },
                    { 0, 0, 1, 0 },
                    { 0, 0, 0, 0 },
                    { 0, 0, 1, 0 } };
 
    int celebIdx = celebrity(arr, 4);
 
    if (celebIdx == -1)
        cout << ("No Celebrity");
    else {
        cout << "Celebrity ID " << celebIdx;
    }
    return 0;
return 0;
}
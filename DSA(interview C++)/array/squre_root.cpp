#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 100;
    int key = 8;
    int s = 0, e = n - 1;
    int mid ;
while(s <= e)
    {
        mid = s + (e - s) / 2;
        int val=mid*mid;
 
        if(val==n){
           cout<< mid;   
        }
        else if (val<n){
            s=mid+1;
        }
        else {
            e=mid-1;
        }
    }
   
    return 0;
}
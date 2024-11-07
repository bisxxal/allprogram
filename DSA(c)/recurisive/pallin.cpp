#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    if (n==0)
    return 0;
//   
    int lastdigit=n%10;
    // int rev=rev*10+lastdigit;
    // int remening=n/10;

 
    if ( lastdigit==121)
     return n;
    else 
    return 0;

    cout<< n<< lastdigit;
 sum(n-1); 

}
int main( ){
    int n=121;
    int temp= sum(n);
if(temp == n)
cout<< n<<" pallindwom";
else 
cout<<" not";

return 0;
}
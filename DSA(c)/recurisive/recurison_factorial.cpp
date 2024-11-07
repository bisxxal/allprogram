
#include<iostream>
using namespace std;
int fun(int n ){
    int result ;
        if (n==1 )
        return 1;
       if(n==0)
       return 0;
         else{
            int a= fun (n-1);
            result = a*n;
         }
       return result;
}
int main( ){
int fact=0;
cout<< fun(fact);
return 0;
}
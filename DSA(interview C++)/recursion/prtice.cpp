#include<bits/stdc++.h>
using namespace std;
void reachome(int src,int dest  ){

   if (src==dest){
   cout<< "reached home : "<< endl;
   return  ;
   }
   cout<< "source "<<src<<" destion "<< dest<<endl;
//processing part
src++;
  reachome(src,dest);
}
int main( ){
int src,dest;
cin>>src>>dest;
 reachome(src,dest);
 
return 0;
}
 
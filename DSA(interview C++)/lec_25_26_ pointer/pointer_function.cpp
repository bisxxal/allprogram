// #include<iostream>
// using namespace std;
// void fun(int *p){

//    cout<<"Function 1"<<p<<endl;
// }
// void update(int *p){
//     // p=p+1;
//     // cout<<"Function 2: "<< *p<<endl;
// *p=*p+1;
// }
// int sum(int *arr,int n){

//     cout<<"Size is :"<<sizeof(arr)<<endl;
//     int size=0;
//     int ans=0;
//     for(int i=0;i<n;i++){
//         ans+=arr[i]; 
//     }return ans;
// }
// int main( ){
// int val =5;
// int *p=&val;
// fun(p);
// cout<<"Before "<<*p<<endl;
// update(p);
// cout<<"After "<<*p<<endl;

// int arr[10]={1,2,3,4,5,10};
// cout<<sum(arr+3,3);
// return 0;
// }         
 //---------------------------------------------------functiom double poointer ----------------------------------------------------------

#include<iostream>
using namespace std;
void fun(int *p){

   cout<<"Function 1"<<p<<endl;
}
void update(int **p2){
    // p2=p2+1;
    // *p2=*p2+1; 
    **p2 =**p2+1;
}
 
int main( ){
 int i=5;
 int *p=&i;
 int **p2=&p;

 cout<< "Before"<< i<< endl;
 cout<< "Before"<< p<< endl;
  cout<< "Before"<< p2<< endl<<endl;
  update(p2);
cout<< "After"<< i<< endl;
cout<< "After"<< p<< endl;
 cout<< "After"<< p2<< endl;
 

 
return 0;
}
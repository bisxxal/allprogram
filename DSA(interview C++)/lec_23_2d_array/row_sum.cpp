#include<bits/stdc++.h>
using namespace std;

void sumrow(int arr[][3]  ,int row ,int col){
    cout<<"Printing sum of row: "<<endl;
   for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<3;col++){
        sum+=arr[row][col];
    }cout<<sum<<" ";
}
cout<<endl;
}
void sumcol(int arr[][3]  ,int row ,int col){
    
    cout<<"Printing sum of columb: "<<endl;
   for(int col=0;col<3;col++){
    int sum=0;
    for(int row=0;row<3;row++){
        sum+=arr[row][col];
    }cout<<sum<<" ";
}
cout<<endl;
}
int largerrowsum(int arr[][3]  ,int row ,int col){
    cout<<"largest sum of row: "<<endl; int maxi=INT_MIN,rowindex=-1;
   for(int row=0;row<3;row++){
    int sum=0;
    for(int col=0;col<3;col++){
        sum+=arr[row][col];
    }
    if (sum>maxi){
        maxi=sum;
        rowindex=row;
    }
}
cout<< "maximum Sum Is :"<<maxi<<endl;
return rowindex;

}
int main( ){

int arr[3][3];
for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        cin>> arr[row][col];
    }
}

for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
        cout<< arr[row][col]<<" ";
    }cout<<endl;
}
 sumrow(  arr,3,3);
 sumcol(  arr,3,3);

 int num=largerrowsum(arr,3,3);
 cout<< "Maxi row is at index :"<<num<<endl;
return 0;
}
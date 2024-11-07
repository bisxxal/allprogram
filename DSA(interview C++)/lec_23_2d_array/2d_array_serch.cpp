#include<bits/stdc++.h>
using namespace std;

bool serchele(int arr[][3],int target ,int row ,int col){
        for(int row=0;row<3;row++){
    for(int col=0;col<3;col++){
       if (arr[row][col] == target)
       return 1;
    }
}
return 0;
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
int target;
cout<< "enter element to search: "<<endl;cin>>target;
if(serchele(arr,target,3,3))
cout<<"Element Found";
else
cout<< "element not found";
return 0;
}
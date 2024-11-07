#include<bits/stdc++.h>
using namespace std;
 
void WavePrint(int arr[][3]  ,int row ,int col)
{ 
    for(int j=0;j<row ;j++){

        if (j%2==0){
            for(int i=0;i<col;i++){
                cout << arr[i][j] << " ";
            }
             }
            else 
             for(int i=col-1;i>=0;i--){
                cout << arr[i][j] << " ";
            }
       
    }
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
WavePrint(arr ,3,3);
return 0;
}
#include<iostream>
using namespace std;
int main(){
    int a,*p;
    p=&a;
    a=23;
    cout<<"value of a ="<<*p<<endl<<"value of adress is"<<&p<<endl;     

    int *q=new int (23);
    cout<<"the value of value q is "<<*q<<endl;

    //memoery allocation in arry 
    int *arr=new int [4];
    arr[0]=87;
    arr[1]=65;
    arr[2]=23;
    arr[3]=9;
    delete[] arr;               //delete the arry using delete operater

    

cout<< "the value of arry 0 is "<<arr[0]<<endl;
cout<< "the value of arry 1 is "<<arr[1]<<endl;
cout<< "the value of arry 2 is "<<arr[2]<<endl;
cout<< "the value of arry 3 is "<<arr[3]<<endl;


//delete arry 

return 0;
}
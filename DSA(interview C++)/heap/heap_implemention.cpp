#include<bits/stdc++.h>
using namespace std;

class heap{
    public:

    int arr[100], size;
    heap( ){

        arr[0]=-1;
        size =0;
    }
    void insert(int val){

    // To check whether the key
    // can be inserted or not.
    // if (size == maxSize) {
    //     cout << "\nOverflow: Could not insertKey\n";
    //     return;
    // }
        size++;
        int index = size;
        arr[size] = val;

        while ( index > 1){
            int parent =  index / 2;

            if ( arr[parent] < arr[index]){
              swap(arr[parent], arr[index]);
                index = parent;
            }
            else 
            return;
        }
    }
void deleteheap(){

    if(size==0)
    {
        cout<<"EMPTY HEAP :"<<endl;
        return;
    }
  //step 1 put last eleement in first index
    arr[1] = arr[size];
    // move lat element into last index
    size--;
    //take root node to its correct  postion
    int i = 1;
    while (i<size)
    {
        int leftindex = 2*i;
        int rightindex = 2*i+1;

        if( leftindex < size && arr[i] < arr[leftindex]){

            swap ( arr[i] , arr[leftindex]);
            i= leftindex;
        }

         if( rightindex < size && arr[i] < arr[rightindex]){

            swap ( arr[i] , arr[rightindex]);
            i= rightindex;
        }
        else
        return;
    }
    
}
    void print(){

        for(int i=1;i<= size; i++){
            cout<< arr[i]<<" ";

        }cout<< endl;
    }
};
//          1 basrd indexing
void heapify( int arr[],int n ,int i){

    int largest = i;
    int left  = 2*i;
    int right  = 2*i+1;

    if( left < n && arr[ largest] < arr[left]){
        largest = left;
    }
      if( right  < n && arr[largest] < arr[right ])
       largest = right;

    if( largest != i){
        swap( arr[largest],arr[i]);
        heapify(arr ,n , largest);
    }
}
int main( ){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(52);
    h.insert(53);
    h.insert(54);

    h.print();
    h.deleteheap();
    
    h.print();

    int arr[6] = {-1 ,54 ,53 ,55 ,52 , 50};
int n=5;
    for(int i=n/2 ;i>0 ;i--){
        heapify( arr ,n,i);
    }
 cout<< "Printlintg the array  now :";
  for(int i=1;i<= n; i++){
            cout<< arr[i]<<" ";

        }cout<< endl;
return 0;
}
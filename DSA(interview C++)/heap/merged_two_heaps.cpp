
#include <bits/stdc++.h>
using namespace std;

void heapify( vector<int> &arr ,int n ,int i){

    int largest = i;
    int left  = 2*i+1;
    int right  = 2*i+2;

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
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m){

        vector<int> ans;
// step1: merge element into ans
        for(auto i :a)
        ans.push_back(i);
        for(auto i :b)
        ans.push_back(i);
        // step 2
        int size = ans.size();
        for(int i=size/2-1 ;i>=0 ;i--){
            heapify(ans , size , i);
        }
 // for printing heap
  for(auto val : ans){
    cout<< val<< " ";
  }
    }
 
int main()
{
	vector<int> a = { 10, 5, 6, 2 };
	vector<int> b= { 12, 7, 9 };

	int N = a.size();
	int M = b.size();

	 
vector<int> merge=mergeHeaps(  a, b, N, M);
 
	return 0;
}
// 12 10 9 2 5 7 6 
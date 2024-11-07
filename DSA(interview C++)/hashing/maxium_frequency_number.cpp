 
#include <bits/stdc++.h>
using namespace std;

int mostFrequent(vector<int> &arr, int n)
{
	// Insert all elements in count.
	unordered_map<int, int> count;

    int maxferq = 0 , maxans =-1;

	for (int i = 0; i <n; i++){
		count[arr[i]]++;
        maxferq = max(maxferq , count[arr[i]]);
    }

	// find the max frequency
	 
	for (int i=0;i<n;i++) {
		if (maxferq == count[arr[i]]) {
			maxans  = arr[i];
			break;
		}
	}

	return maxans;
}	

int main()
{
	vector<int> arr  = {40,50,30,40,50,30,30 };
	int n =  arr.size();
	cout << mostFrequent(arr, n);
	return 0;
}

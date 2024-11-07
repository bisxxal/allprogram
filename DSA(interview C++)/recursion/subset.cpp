// #include <bits/stdc++.h>
// using namespace std;

// vector<int> subset;
// void solve(int a[], int n, int index) {
//     if(index == n){
//         // print the subset
//         for(int i=0; i<subset.size(); i++){
//             cout << subset[i] << " ";
//         }
//         cout << "\n";
//     }else{
//         subset.push_back(a[index]);
//         solve(a, n, index+1);
//         subset.pop_back();
//         solve(a, n, index+1);
//     }
// }

// int main() {
//     int a[] = {1, 2, 3};
//     int n = sizeof(a)/sizeof(a[0]);
//     int startIndex = 0;
//     solve(a, n, startIndex);
//     return 0;
// }

#include <iostream>
using namespace std;

void findSubsets(int nums[], int n)
{
	// Loop through all possible subsets using bit manipulation
	for (int i = 0; i < (1 << n); i++) {

		// Loop through all elements of the input array
		for (int j = 0; j < n; j++) {

			// Check if the jth bit is set in the current subset
			if ((i & (1 << j)) != 0) {

				// If the jth bit is set, add the jth element to the subset
				cout << nums[j] << " ";
			}
		}

		cout << endl;
	}
}

int main()
{
	int arr[] = { 1, 2, 3 };
	int n = sizeof(arr)/sizeof(arr[0]);
	findSubsets(arr, n);
}

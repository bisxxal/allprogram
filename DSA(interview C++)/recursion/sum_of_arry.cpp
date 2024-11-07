#include <iostream>
using namespace std;
int sum(int *arr, int n)
{
    if (n <= 0)
        return 0;
 
   int no1 =arr[n-1] ;
    int ans = sum(arr, n-1);
    return ans+no1;
}
int main()
{
    int arr[10] = {67,1,2,3,4,5,6,6};
   int n = sizeof(arr) / sizeof(arr[0]);
    int res = sum(arr, n);
    cout << res;
    return 0;
}
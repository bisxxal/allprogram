
#include <bits/stdc++.h>
using namespace std;

int kthLargestSum(vector<int> &arr, int K)
{
    // priority_queue of min heap
    priority_queue<int, vector<int>, greater<int>> Q;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {

          sum = sum + arr[j];

            // if queue has less than k elements,
            // then simply push it
            if (Q.size() < K)
                Q.push(sum);

            else
            {
// it the min heap has equal tok elements then just check if the largest kth element is smaller than x then insert 
// else its of no use
                if (sum > Q.top())
                {
                    Q.pop();
                    Q.push(sum);
                }
            }
        }
    }

    // the top element will be then kth
    // largest element
    return Q.top();
}

// Driver's code
int main()
{
 vector<int> a  = { 3,2,1};
   
    int K = 6;

    // Function call
    cout << kthLargestSum(a, K);
    return 0;
}
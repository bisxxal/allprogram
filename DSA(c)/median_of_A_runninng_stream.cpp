 
#include<bits/stdc++.h>
using namespace std;
 
void printMedians(double arr[], int n)
{
    // max heap to store the smaller half elements
    priority_queue<double> maxheap;
 
    // min heap to store the greater half elements
    priority_queue<double,vector<double>,greater<double> > minheap;
 
    double med = arr[0];
    maxheap.push(arr[0]);
 
    cout << med << endl;
 
    // reading elements of stream one by one
    /*  At any time we try to make heaps balanced and
        their sizes differ by at-most 1. If heaps are
        balanced,then we declare median as average of
        min_heap_right.top() and max_heap_left.top()
        If heaps are unbalanced,then median is defined
        as the top element of heap of larger size  */
    for (int i=1; i < n; i++)
    {
        double x = arr[i];
 
        // case1(left side heap has more elements)
        if (maxheap.size() > minheap.size())
        {
            if (x < med)
            {
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(x);
            }
            else
                minheap.push(x);
 
            med = (maxheap.top() + minheap.top())/2.0;
        }
 
        // case2(both heaps are balanced)
        else if (maxheap.size()==minheap.size())
        {
            if (x < med)
            {
                maxheap.push(x);
                med = (double)maxheap.top();
            }
            else
            {
                minheap.push(x);
                med = (double)minheap.top();
            }
        }
 
        // case3(right side heap has more elements)
        else
        {
            if (x > med)
            {
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(x);
            }
            else
                maxheap.push(x);
 
            med = (maxheap.top() + minheap.top())/2.0;
        }
 
        cout << med << endl;
    }
}
 
int main()
{
    // stream of integers
    double arr[] = {5, 15, 10, 20, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printMedians(arr, n);
    return 0;
}
 
#include <bits/stdc++.h>
using namespace std;

using namespace std;

class largestRectangleArea {
public:
    int largestAreaInHistogram(vector<int>& histogram) {
        int n = histogram.size(); //It stores the size of histogram vector.
        if(n == 0) return 0;
        // Create an empty stack. The stack holds indexes of histogram vector.
        stack<int> st;
        st.push(-1);
        int maxarea=0;
        //Iterating over the histogram vector for finding the maximum area.
        for(int i=0;i<n;i++){
            //st.size()>1 because -1 is stored initially and size of stack is 1
            while(st.size()!=1 && histogram[st.top()]>=histogram[i]){
                int len = histogram[st.top()];
                st.pop();
                //computing the width of the rectangle forming in histogram
                int width = i-st.top()-1;
                // if the area (len*width) of the rectangle forming in histogram is greater than previous maxarea then maxarea gets updated to the greater area
                int newarea=len*width;
                maxarea=max(maxarea,newarea);
            }
            //Pushing index in stack it helps in calculating width
            st.push(i);
        }
        //Calculating area for all the elements left in stack if it is greater than previous maxarea then update maxarea
        while(st.size()!=1){
            int in=st.top();
            st.pop();
            int w = n-st.top() -1;
            int h = histogram[in];
            maxarea = max(maxarea,w*h);
        }
        return maxarea;
    }
};

int main()
{
    vector<int>hist{5, 6, 4, 3, 7, 5};
    largestRectangleArea ob;
    cout << "Maximum area is " << ob.largestAreaInHistogram(hist);
    return 0;
}
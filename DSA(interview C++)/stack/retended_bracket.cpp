#include <bits/stdc++.h>
using namespace std;

bool checkRedundancy(string &str)
{
    stack<char> st;

    for (auto &ch : str)
    {
        if (ch == '(' || ch == '+' || ch == '-' || ch == '/' || ch == '*')
        {
            st.push(ch);
        }          
        else
        {
            if (ch == ')')
            {
                bool isretendant = true;

                while (st.top() != '(')
                {

                    char top = st.top();
                    if (top == '+' || top == '-' ||
                        top == '*' || top == '/')
                        isretendant = false;

                    st.pop();
                }

                if (isretendant == true)
                    return true;
                    st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string str = "(a+b)";

    bool ans = checkRedundancy(str);
    if (ans == true)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}


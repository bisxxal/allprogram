#include <bits/stdc++.h>
using namespace std;

void compress_str(string str)
{

    int n = str.length();
    int j = 0;
    for (int i = 0; i < n; i++)
    {

        int count = 0;
        while (i < n - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        if (count == 0)
            cout << str[i];
        else
            cout << str[i] << count;
    }
}

int main()
{
    string str = "aaabcdddddef";
    compress_str(str);
    return 0;
}
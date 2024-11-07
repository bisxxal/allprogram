#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k;
    char ch = 'A';
    // cin>>5;
    for (i = 1; i <= 5; i++)
    {

        for (j = 5; j >= i; j--)
            cout << " ";

        for (int m = 1; m <= i; m++)
            cout << ch++;
        ch--;
        for (k = 1; k < i; k++)
            cout << --ch;
        cout << endl;
        ch = 'A';
    }
   
    return 0;
}
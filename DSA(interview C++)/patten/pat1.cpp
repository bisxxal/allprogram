#include <bits/stdc++.h>
using namespace std;
void patt(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    patt(n);
    return 0;
}
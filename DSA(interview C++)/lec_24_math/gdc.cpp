#include <bits/stdc++.h>
using namespace std;
int findgdc(int a, int b)
{
    // if (a == 0)
    //     return b;

    // if (b == 0)
    //     return a;
    // while (a != b)
    // {
    //     if (a > b)

    //         a = a - b;

    //     else
    //         b -= a;
    // }return a;
                                  //// another type 
 if (a == 0)
        return b;
    return findgdc(b % a, a);

}
int main()
{
    int a, b;
    cout << "Enter two number :" << endl;
    cin >> a >> b;
    int ans = findgdc(a, b);
    cout << "GDC of " << a << " & " << b << " is " << ans;
    return 0;
}
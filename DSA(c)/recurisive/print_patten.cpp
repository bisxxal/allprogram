// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// #include<bits/stdc++.h>
// using namespace std;

// void  patten(int n){
//     if (n==0)
//     return ;

//     patten(n-1);

//      for(int i=1;i<=n;i++){
//         cout<<i<<" " ;

//     }cout<<endl;
// }
// int main( ){
//     int n=5;
//  patten( n);

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void patten(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    patten(n - 1);

    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n = 5;
    patten(n);

    return 0;
}
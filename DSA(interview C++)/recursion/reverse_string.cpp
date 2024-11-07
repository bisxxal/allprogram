#include <iostream>
using namespace std;
void reversedtring(string &str, int i, int j)
{
    cout<<" call recursive for "<< str<< endl;
    if (i > j)
        return;
    swap(str[i], str[j]);
    i++;
    j--;
    reversedtring(str, i, j);
}
int main()
{
    string str;
    cin >> str;
    reversedtring(str, 0, str.length() - 1);
    cout << str;
    return 0;
}
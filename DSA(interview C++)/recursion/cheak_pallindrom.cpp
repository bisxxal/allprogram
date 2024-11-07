#include <iostream>
using namespace std;
bool reversedtring(string &str, int i, int j)
{
    
    if (i > j)
        return true;

        if(str[i]!=str[j])
        return false;
   else{
    // i++;
    // j--;
     reversedtring(str, i+1, j-1);
    }
 
    
}
int main()
{
    string str;
    cin >> str;
    bool ans = reversedtring(str, 0, str.length() - 1);
    if (ans)
        cout << "pallindrome";
    else
        cout << "not";

    return 0;
}
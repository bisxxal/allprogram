//************************************************* 1 . chain like macros

#include <iostream>
using namespace std;
#define FACEBOOK FOLLOWERS
#define FOLLOWERS 150
int main() {
    
    cout << " This user have "<< FACEBOOK << "K followers on Facebook!";
 
    return 0;
}
//************************************************** 2.object like macros

#include <iostream>
using namespace std;
#define DATE 25
int main() {

    cout << "The lockdown is extended upto "<< DATE << "-JUNE-2020";
 
    return 0;
}
//    ********************************************3.Function-like Macros
#include <iostream>
using namespace std;
#define min(x, y) (((x) < (y)) ? (x) : (y))
int main() {
    int x = 21;
    int y = 56;
    cout << "The minimum value between " << x << " and " << y
         << " is: " << min(x, y);
    return 0;
}

 
// ********************************************* 4. Multi-Line Macros
#include <iostream>
using namespace std;
#define ABA 1, \
            2, \
            3
int main() {
    // Array arr[] with elements defined in macro 'ABA'.
    int arr[] = { ABA };
    cout<<"Elements of Array are:\n";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << ' ';
    } 
    return 0;
}

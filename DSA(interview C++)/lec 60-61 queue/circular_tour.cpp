#include <bits/stdc++.h>
using namespace std;
class petrolPump {
public:
	int petrol;
	int distance;
};

int printTour(petrolPump p[], int n)
{
	// deficit is used to store the value of the balance as
	// soon as the value of balance becomes negative so as
	// not to traverse the array twice in order to get the
	// solution
	int start = 0, deficit = 0;
	int balance = 0;
	for (int i = 0; i < n; i++) {
		balance += p[i].petrol - p[i].distance;
		if (balance < 0) {
			// If this particular step is not done then the
			// between steps would be redundant
			start = i + 1;
			deficit += balance;
			balance = 0;
		}
	}
	  if(balance + deficit >=0) 
            return start;
        return -1;
}


int main()
{
	petrolPump arr[] = { { 4,6 }, { 6,5 }, {7 ,3 } ,{ 4 ,5 }};

	int n = sizeof(arr) / sizeof(arr[0]);
	int start = printTour(arr, n);

	(start == -1) ? cout << "No solution"
				: cout << "Start = " << start;

	return 0;
}
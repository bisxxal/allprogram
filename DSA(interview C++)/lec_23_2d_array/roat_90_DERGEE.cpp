#include <bits/stdc++.h>
using namespace std;

void rotate90Clockwise(int arr[][4],int row ,int col)
{
	for (int j = 0; j < 4; j++)
	{
		for (int i = 4 - 1; i >= 0; i--)
			cout << arr[i][j] << " ";
		cout << '\n';
	}
}
int main()
{
	int arr[4][4]={ { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };
	rotate90Clockwise(arr,4,4);
	return 0;
}

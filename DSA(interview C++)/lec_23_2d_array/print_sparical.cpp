#include <bits/stdc++.h>
using namespace std;
#define R 4
#define C 4

void spiralPrint(int row, int col, int a[R][C])
{
	int i, statrow = 0, statcol = 0;

	/* statrow - starting row index
		row - ending row index
		statcol - starting column index
		col - ending column index
		i - iterator
	*/

	while (statrow < row && statcol < col) {
		/* Print the first row from
			the remaining rows */
		for (i = statcol; i < col; ++i) {
			cout << a[statrow][i] << " ";
		}
		statrow++;

		/* Print the last column
		from the remaining columns */
		for (i = statrow; i < row; ++i) {
			cout << a[i][col - 1] << " ";
		}
		col--;

		/* Print the last row from
				the remaining rows */
		if (statrow < row) {
			for (i = col - 1; i >= statcol; --i) {
				cout << a[row - 1][i] << " ";
			}
			row--;
		}

		/* Print the first column from
				the remaining columns */
		if (statcol < col) {
			for (i = row - 1; i >= statrow; --i) {
				cout << a[i][statcol] << " ";
			}
			statcol++;
		}
	}
}
 
int main()
{
	int a[R][C] = { { 1, 2, 3, 4 },
					{ 5, 6, 7, 8 },
					{ 9, 10, 11, 12 },
					{ 13, 14, 15, 16 } };
 
	spiralPrint(R, C, a);
	return 0;
}
 
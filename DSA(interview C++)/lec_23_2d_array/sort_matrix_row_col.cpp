
#include <bits/stdc++.h>
using namespace std;
// Sort each row of the matrix with given below function
void sortByRow(int matrix[3][3], int n)
{
    for (int i = 0; i < n; i++)
        sort(matrix[i], matrix[i] + n);
}

// function to find the matrix's transpose
void transpose(int matrix[3][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

void sortMatRowAndColWise(int matrix[3][3], int n)
{
    // sort rows of matrix[][]
    sortByRow(matrix, n);
    // get transpose of matrix[][]
    transpose(matrix, n);
    // again sort rows of matrix[][]
    sortByRow(matrix, n);
    // again get transpose of matrix[][]
    transpose(matrix, n);
}

void printMatrix(int matrix[3][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[3][3] = {{5, 2, 3},
                                  {8, 5, 7},
                                  {6, 4, 8}};

    int n = 3;
    cout << "Matrix before Sorting:" << endl;
    printMatrix(matrix, n);
    sortMatRowAndColWise(matrix, n);
    cout << "Matrix After Sorting:" << endl;
    printMatrix(matrix, n);
    return 0;
}

// #include <iostream>
// using namespace std;

// bool issafe(int **arr, int x, int y, int n)
// {
//     if (x < n && y < n && arr[x][y] == 1)
//     {
//         return true;
//     }
//     return false;
// }
// bool ratinMaze(int **arr, int x, int y, int n, int **solArr)
// {
//     if (x == n - 1 && y == n - 1)
//     {
//         solArr[x][y] = 1;
//         return true;
//     }
//     if (issafe(arr, x, y, n))
//     {
//         solArr[x][y] = 1;
//         if (ratinMaze(arr, x + 1, y, n, solArr))
//         {
//             return true;
//         }
//         if (ratinMaze(arr, x, y + 1, n, solArr))
//         {
//             return true;
//         }
//         solArr[x][y] = 0;
//         return false;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cin >> n;
// // creating dynamic array 

//     int **arr = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = new int[n];
//     }
   
//     // taking  input in dynamiC ARARY 
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cin >> arr[i][j];
//         }
//     } cout << endl << endl;
//  // creating dynamic array for solution    
//     int **solArr = new int *[n];
//     for (int i = 0; i < n; i++)
//     {
//         solArr[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             solArr[i][j] = 0;
//         }
//     }
//  //  printing values of output 
//     if (ratinMaze(arr, 0, 0, n, solArr))
//     {
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cout << solArr[i][j] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;
 
bool issafe(int **arr,int x,int  y ,int n){
    
    if ( x<n&& y<n && arr[x][y]==1){
         return true;
    }
    return false ;
}
bool mazein (int **arr,int x,int  y ,int n,int **sol){
    // base case;
    if ( x==n-1&& y==n-1){
        sol[x][y]=1;
        return true;
    }
    // recurive 
    if (issafe (arr ,x,y,n)){
        
        sol[x][y]=1;
         
        // moving to down
        if(mazein (arr, x+1,y,n,sol))
        return true ;
        // moving to right 
        if(mazein (arr, x,y+1,n,sol))
        return true ;
        // moving to up
        if(mazein (arr, x-1,y,n,sol))
        return true ;
        // moving to right 
        if(mazein (arr, x,y-1,n,sol))
        return true ;
    
        // backtracking 

        sol[x][y]=0;
        return false ;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
// creating dynamic array 

    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
   
    // taking  input in dynamiC ARARY 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    } cout << endl << endl;
 // creating dynamic array for solution    
    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
 //  printing values of output 
    if (mazein(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
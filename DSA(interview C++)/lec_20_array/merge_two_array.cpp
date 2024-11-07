// --------------------------------------------------------- using merge function ----------------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int arr[] = {1, 42, 45, 76, 23};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     int arr2[] = {15, 4, 25, 6};
//     int m = sizeof(arr2) / sizeof(arr2[0]);
// int arr3[m+n];

//     merge(arr, (arr + n), arr2, (arr2 + m),arr3);
//      int l = sizeof(arr3) / sizeof(arr3[0]);
// sort(arr3,arr3+l);
//      for (int i = 0; i < (m + n); i++)
//         cout << arr3[i] << " ";

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
void mergearr(int *arr1,int n1 ,int *arr2,int n2,int *arr3){

     int i = 0, j = 0, k = 0;

    //  sort function 

    //    while (i<n1&& j<n2){
    //     if (arr1[i]<arr2[j])
    //             arr3[k++]=arr1[i++]; 
    //             else 
    //             arr3[k++]=arr2[j++];
    //    }


      while(i < n1){
      arr3[k++] = arr1[i++];
    }
       
      
      while(j < n2){
      arr3[k++] = arr2[j++];
    }
       
      sort(arr3, arr3+n1+n2);
 
}

void print(int ans[]){

}
int main()
{

    int arr[] = {1, 42, 45, 76, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    int arr2[] = {15, 4, 25, 6};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    int arr3[n+m];
 mergearr(arr,n,arr2,m,arr3);
 
 for (int f = 0; f<n+m; f++)
        cout << arr3[f] << " ";

   
    return 0;
}
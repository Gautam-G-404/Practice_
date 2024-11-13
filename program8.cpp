// Time Complexity: O(n)

// Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int rotate_by_k(vector<int> &a,int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(i>k-1)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
       if(i<k)
        {
            cout<<a[i];
        } 
    }  

}
int main()
{
    int n,k;
    cout<<"ENter n :"<<endl;
    cin>>n;
    cout<<"ENter k :"<<endl;
    cin>>k;
    vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rotate_by_k(a,n,k);
}



// Method 2
// #include <iostream>
// using namespace std;
// void swap(int arr[], int a, int b, int k)
// {
//   for (int i = 0; i < k; i++)
//   {
//     int temp = arr[a + i];
//     arr[a + i] = arr[b + i];
//     arr[b + i] = temp;
//   }
// }
// void BlockSwap(int arr[], int k, int n)
// {
//   if (k == 0 || k == n)
//     return;
//   // If first part and second part are of same size
//   if (k == n - k)
//   {
//     swap(arr, 0, n - k, k);
//     return;
//   }
//   // If first part of array is of smaller size
//   else if (k < n - k)
//   {
//     swap(arr, 0, n - k, k);
//     BlockSwap(arr, k, n - k); // second part of array is taken now
//   }
//   // If second part of array is of smaller size
//   else
//   {
//     swap(arr, 0, k, n - k);
//     BlockSwap(arr + n - k, 2 * k - n, k);
//   }
// }
// int main()
// {
//   int arr[] = {1, 2, 3, 4, 5, 6, 7};
//   int n = 7;
//   int k = 2;
//   BlockSwap(arr, k, n);
//   cout << "After Rotating the array " << endl;
//   for (int i = 0; i < n; i++)
//     cout << arr[i] << " ";
//   return 0;
// }
// Output:

// After Rotating the array
// 3 4 5 6 7 1 2

// Time Complexity: O(n)

// Space Complexity: O(1)
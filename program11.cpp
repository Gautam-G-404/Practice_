// Unsorted array remove duplicate
#include <bits/stdc++.h>
using namespace std;
void duplicate(int a[], int n) {
//     Time complexity :  O(n*n) + O(n) 

// -> O(n*n) for updating boolean array

// -> O(n) for the printing of non-duplicates

// Space complexity: O(n) + O(n) 

// -> O(n) marking array 

// -> O(n) answer array

      // int mark[n] = {
      //   0
      // };
      // for (int i = 0; i < n; i++) {
      //   if (mark[i] == 0) {
      //     for (int j = i + 1; j < n; j++) {
      //       if (a[i] == a[j]) {
      //         mark[j] = 1;
      //       }
      //     }
      //   }
      // }
      // for (int i = 0; i < n; i++) {
      //   if (mark[i] == 0) {
      //     cout << a[i] << ",";
      //   }
      // }

map<int, int>mp ;

// T.c=O(n)+O(n)
// S.c=O(n)
        for (int i = 0; i < n; i++) {
            if (mp.find(a[i]) == mp.end()) {
                cout << a[i] << " ";
                mp[a[i]]++;
            }
        }

}

int main() 
{
  int arr[] = {5, 1, 9, 5, 4, 1, 5, 5, 34} ;
  int n = 9;
  duplicate(arr, n);
}
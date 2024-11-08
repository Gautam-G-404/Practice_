#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>arr = {8, 7, 1, 6, 5, 9};
	int n = arr.size();
	sort(arr.begin(), arr.end());
	for (int i = 0; i < n / 2; i++) {
		cout << arr[i] << " ";
	}
	for (int i = n - 1; i >= n / 2; i--) {
		cout << arr[i] << " ";
	}
}


// Time Complexity: O(nlogn) +O(n).O(nlogn) for sorting the array and O(n) for printing the elements. 

// Space Complexity: O(1).
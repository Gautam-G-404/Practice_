#include<bits/stdc++.h>

using namespace std;
// T.C=O(n*n)
// O(1)
// int main() {
//   int n = 5;
 
//   int a[][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}}; 
//   cout << "The Symmetric Pairs are: " << endl;
//   for (int i = 0; i < n; i++) {
//     for (int j = i + 1; j < n; j++) 
//     {
//         if(a[i][0]==a[j][1]&&a[j][0]==a[i][1])
//         {
//             cout<<a[j][0]<<" "<<a[j][1]<<endl;;
//             break;
//         }
//     }
//     }
// }
int main()
{
	int n = 5;
	int arr[5][2] = {{1, 2}, {2, 1}, {3, 4}, {4, 5}, {5, 4}};
	unordered_map<int, int>mp;
	cout<<"The Symmetric Pairs are: "<<endl;
	for (int i = 0; i < n; i++) 
    {
		int first = arr[i][0];
		int second = arr[i][1];
        if(mp.find(second)!=mp.end()&&mp[second]==first)
        {
            cout<<"("<<first<<","<< second<<")"<<" ";
        }
        else{
            mp[first]=second;

            
        }
    }
}
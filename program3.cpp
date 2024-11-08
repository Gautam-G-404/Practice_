//Brute Force method 
//T.C=O(N*log(N))
//S.C=O(1)// #include<bits/stdc++.h>
// using namespace std;
// int second_max(vector <int>& a, int n)
// {
//     if(n==0 || n==1)
//         cout<<-1<<" "<<-1<<endl;
//else
// sort(a.begin(),a.end());
// return a[n-2];
// }
// int second_min(vector <int>& a, int n)
// {
// sort(a.begin(),a.end());
// return a[1];
// }
// int main()
// {
//     int n;
//     cout<<"enter the value of n: \n";
//     cin>>n;
//     vector<int> a(n);
//     cout<<"enter the value of elements: \n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
// cout<<second_max(a,n)<<"\n";
// cout<<second_min(a,n);
// }

//better approach
//Time Complexity: O(N), We do two linear traversals in our array

//Space Complexity: O(1)
// #include<bits/stdc++.h>
// using namespace std;
// int min_max(vector <int>& a, int n)
// {
// int small=INT_MAX,second_small=INT_MAX;
// int large=INT_MIN,second_large=INT_MIN;


// for(int i=0;i<n;i++)
// {
// small=min(small,a[i]);
// large=max(large,a[i]);
// }
// for(int i=0;i<n;i++)
// {
// if(a[i]<second_small&&a[i]!=small)
// second_small=a[i];
// if(a[i]>second_large&&a[i]!=large)
// second_large=a[i];
// }
// cout<<second_small<<"\n"<<second_large<<"\n";
// return 0;
// }

// int main()
// {
//     int n;
//     cout<<"enter the value of n: \n";
//     cin>>n;
//     vector<int> a(n);
//     cout<<"enter the value of elements: \n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
// cout<<min_max(a,n)<<"\n";

// }




//Time Complexity: O(N), Single-pass solution

//Space Complexity: O(1)
// #include<bits/stdc++.h>
// using namespace std;
// int secondSmallest(int arr[],int n)
// {
//     if(n<2)
//         return -1;
//     int small = INT_MAX;
//     int second_small = INT_MAX;
//     int i;
//     for(i = 0; i < n; i++) 
//     {
//        if(arr[i] < small)
//        {
//           second_small = small;
//           small = arr[i];
//        }
//        else if(arr[i] < second_small && arr[i] != small)
//        {
//           second_small = arr[i];
//        }
//     }
//    return second_small;     
// }
// int secondLargest(int arr[],int n)
// {
// 	if(n<2)
// 	return -1;
//     int large=INT_MIN,second_large=INT_MIN;
//     int i;
//     for (i = 0; i < n; i++) 
//     {
//         if (arr[i] > large) 
//         {
//             second_large = large;
//             large = arr[i];
//         }
 
//         else if (arr[i] > second_large && arr[i] != large) 
//         {
//             second_large = arr[i];
//         }
//     }
//     return second_large;                
// }

// int main() {
//     int arr[]={1,2,4,7,7,5};  
//     int n=sizeof(arr)/sizeof(arr[0]);
//         int sS=secondSmallest(arr,n);
//         int sL=secondLargest(arr,n);
//     cout<<"Second smallest is "<<sS<<endl;
//     cout<<"Second largest is "<<sL<<endl;
//     return 0;
// }



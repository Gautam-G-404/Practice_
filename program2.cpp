//brute force(T.C=O(n*Logn),S.C=O(n))
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int largest_No(vector<int>& a,int n)
// {

// sort(a.begin(),a.end());
// cout<<"\nThe Sorted array Values are : \n";
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";
//     }
//     cout<<"\n"<<a[n-1];
// return a[a.size()-1];
// }
// int main()
// {
//     int n;
//     cout<<"Enter The Value Of n(no. of elements) :\n";
//     cin>>n;
//     vector <int> a(n);
    
    
//     cout<<"Enter The Values\n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"The Values are : \n";
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";
//     }
//     largest_No(a,n);
// }

//Method-Recursion
//T.C=O(N)
//S.C=O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int largest_No(vector<int>& a,int n)
// {
// int max=a[0];
// for(int i=0;i<n;i++)
// {
//     if(max<a[i])
//     {
//         max=a[i];
//     }
// }
// return max;
// }
// int main()
// {
//     int n;
//     cout<<"Enter The Value Of n(no. of elements) :\n";
//     cin>>n;
//     vector <int> a(n);
    
    
//     cout<<"Enter The Values\n";
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"The Values are : \n";
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<"\t";
//     }
//     cout<<largest_No(a,n);
// }

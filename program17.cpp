// Time Complexity: O(n^2)

// Space Complexity: O(n)

// #include<bits/stdc++.h>
// using namespace std;
// int sort_2d(int arr2d[2][100],int k)
// {
//   for(int i=0;i<k-1;i++)
//   {
//     for(int j=0;j<k-i-1;k++)
//     {
//       if(arr2d[1][j]<arr2d[1][j+1])
//       {
//         swap(arr2d[1][j],arr2d[1][j+1]);
//         swap(arr2d[0][j],arr2d[0][j+1]);
//       }
//     }
//   }
// }
// int sort_by_frq(vector <int>& a,int n)
// {
//     sort(a.begin(),a.end());
//     int arr2d[2][100];
//     int k=0;
//     int count=0;
//     for(int i=0;i<n;i++)
//     {
//         if(i==0)
//         {
//             arr2d[0][k]=a[i];
//             count=1;
//         }
//         else if(a[i]==a[i-1])
//         {
//             count++;
//         }
//         else
//         {
//             arr2d[1][k]=count;
//             count=1;
//             k++;
//             arr2d[0][k]=a[i];
//         }
//     }
//     arr2d[1][k]=count;
//     k++;
//     sort_2d(arr2d,k);
//     int i=0;
//     k=0;
//     while(i<n)
//     {
//         while(arr2d[1][k]>0)
//         {
//             a[i]=arr2d[0][k];
//             i++;
//             arr2d[1][k]--;
//         }
//         k++;
//     }
// }
// int main()
// {
//     int n;
//     cout<<"ENter n :"<<endl;
//     cin>>n;
//     static vector <int> a(n);
//     cout<<"enter array elements: "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     sort_by_frq(a,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i];
//     }
// }



// Time Complexity - O(N) where N is the number of elements in the array

// Space Complexity - O(N) for storing the elements in Map, vector
#include<bits/stdc++.h>
using namespace std;
int sort_ele(pair<int,int> a ,pair<int,int> b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second>b.second;
}
int sort_vec(vector <int> & a,int n)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    vector <pair<int,int>> vec;
    for(auto it=mp.begin();it!=mp.end();it++)
    {
        vec.push_back({it->first,it->second});
    }
    sort(vec.begin(),vec.end(),sort_ele);
    for(int i=0;i<vec.size();i++)
    {
    while(vec[i].second > 0)
    {
        cout<<vec[i].first<<" ";
        vec[i].second--;
    }
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"ENter n :"<<endl;
    cin>>n;
    static vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort_vec(a,n);
}
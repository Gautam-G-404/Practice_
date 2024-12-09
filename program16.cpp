// t.c=O(N*N)
// s.c=O(N)
#include<bits/stdc++.h>
using namespace std;
int ranks_of_arr(vector<int> &a,int n)
{
// for(int i=0;i<n;i++)
// {
//     set<int> s;
//     for(int j=0;j<n;j++)
//     {
//     if(a[j]<a[i])
//     {
//         s.insert(a[j]);
//     }
//     }
//     cout<<s.size()+1<<" ";  
// }

t.c=O(n)+O(n log n)+O(n)
s.c=O(n)
int b[n];
int temp=1;
unordered_map <int,int> mpp;
for(int i=0;i<n;i++)
{
b[i]=a[i];    
}
sort(a.begin(),a.end());
for(int i=0;i<n;i++)
{
if(mpp[a[i]]==0)
{
    mpp[a[i]]=temp;
    temp++;
}
}
for(int i=0;i<n;i++)
{
cout<<mpp[b[i]]<<" ";    
}
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
    ranks_of_arr(a,n);
}
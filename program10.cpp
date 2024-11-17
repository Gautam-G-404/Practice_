#include<bits/stdc++.h>
using namespace std;
int rem_duplicate(vector<int> &a,int n)
{
// Time complexity: O(n*log(n))+O(n)

// Space Complexity: O(n) 
// set <int> set;
// for(int i:a)
//     {
//         set.insert(a[i]);
//     }
//     int j=0;
//     for(auto x:set)
//     {
//         a[j++]=x;
//     }
//     for(int i=0;i<set.size();i++)
//     {
//         cout<<a[i];
//     }


// Time Complexity: O(N)

// Space Complexity: O(1)
int i=0,c;
for(int j=1;j<n;j++)
{
if(a[i]!=a[j])
{
    i++;
    a[i]=a[j];
}
}
c=i+1;
for(int i=0;i<c;i++)
    {
        cout<<a[i];
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
    rem_duplicate(a,n);
}

#include<bits/stdc++.h>
using namespace std;
int rotate_by_left(vector <int> &a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(i>=n-key)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i<n-key)
        {
            cout<<a[i];
        }
        
    }
}
int rotate_by_right(vector <int> &a,int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(i>=key)
        {
            cout<<a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i<key)
        {
            cout<<a[i];
        }
        
    }
}
int main()
{
    int n;
    cout<<"ENter n :"<<endl;
    cin>>n;
    int k;
    cout<<"ENter key :"<<endl;
    cin>>k;
    static vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    rotate_by_left(a,n,k);
    cout<<endl;
    rotate_by_left(a,n,k);
}
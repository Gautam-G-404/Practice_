#include<bits/stdc++.h>
using namespace std;
int search_element(vector <int> &a,int n ,int key)
{
for(int i=0;i<n;i++)
{
    if(a[i]==key)
    cout<<i+1;
}
}
int main()
{
    int n,k;
    cout<<"ENter n :"<<endl;
    cin>>n;
    cout<<"ENter key :"<<endl;
    cin>>k;
    static vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    search_element(a,n,k);
}
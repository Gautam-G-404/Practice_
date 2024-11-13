// Time Complexity: O(n) As we are traversing the array once.

// Space Complexity: O(1).
#include<bits/stdc++.h>
using namespace std;
float average(vector<int> &a,int n)
{
    float sum=0,avg;
    for(int i=0;i<n;i++)
    {
        sum=a[i]+sum;
        avg=sum/n;
    }
    return avg;
}
float median(vector<int> &a,int n)
{
    float m;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
    if(n%2!=0)
    {
        return a[n/2];
    }
    else
    {
        return float(a[(n-1)/2]+a[((n-1)/2)+1])/2;
    }
    
    }
}
int main()
{
    int n;
    cout<<"ENter n :"<<endl;
    cin>>n;
    vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
cout<<average(a,n)<<endl;
cout<<median(a,n);
}
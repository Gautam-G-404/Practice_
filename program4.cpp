#include<bits/stdc++.h>
using namespace std;
//Time Complexity: O(n), single-pass for reversing array.
//Space Complexity: O(1) 

int rev_arr(vector<int> & a,int n)
{
cout<<"method1"<<endl;
for(int i=n-1;i>=0;i--)
{
    cout<<a[i]<<" ";
}
}
//Time Complexity: O(n), single-pass involved.
//Space Complexity: O(1) 
int rev_arr1(vector<int> & a,int n)
{
cout<<endl<<"method2"<<endl;
int temp;
int low=0;
int high=n-1;
for(int i=0;low<high;i++)
{
    //or can use swap(a[low],a[high])
    temp=a[low];
    a[low]=a[high];
    a[high]=temp;
    low++;
    high--;
}
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int rev_arr2(vector<int> &a,int start,int end,int n)
{
if (start<end)
{
    swap(a[start],a[end]);
    rev_arr2(a,start+1,end-1,n);
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
rev_arr(a,n);
rev_arr1(a,n);
cout<<endl<<"method3"<<endl;
rev_arr2(a,0,n-1,n);
for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}
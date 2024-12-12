// t.c=(O(n*n))
// s.c=(O(1))

#include<bits/stdc++.h>
using namespace std;
// int equilibirium_index(vector <int> &a,int n)
// {
// for(int i=0;i<n;i++)
// {
//     int sum_right=0;
//     for(int R=i+1;R<n;R++)
//     {
//         sum_right=sum_right+a[R];
//     }
//     int sum_left=0;
//     for(int L=i-1;L>=0;L--)
//     {
//         sum_left=sum_left+a[L];
//     }
//     if(sum_left==sum_right)
//     {
//         cout<<i;
//     }
// }
// }

// t.c=O(n)
// s.c=O(1)
int equilibirium_index2(vector <int> &a,int n)
{
int total_sum=0;
for(int i=0;i<n;i++)
{
    total_sum=total_sum+a[i];
}
for(int i=0;i<n;i++)
{
    int left_sum=0,right_sum=right_sum-a[i]; 
    if(left_sum==right_sum)
    {
        return i;
    } 
    else{
    left_sum=left_sum+a[i];
    }
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
    equilibirium_index(a,n);
    cout<<endl;
    cout<<equilibirium_index2(a,n);
}
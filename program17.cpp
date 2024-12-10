#include<bits/stdc++.h>
using namespace std;
int sort_2d(int arr2d[2][100],int k)
{
  for(int i=0;i<k-1;i++)
  {
    for(int j=0;j<k-i-1;k++)
    {
      if(arr2d[1][j]<arr2d[1][j+1])
      {
        swap(arr2d[1][j],arr2d[1][j+1]);
        swap(arr2d[0][j],arr2d[0][j+1]);
      }
    }
  }
}
int sort_by_frq(int a[],int n)
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
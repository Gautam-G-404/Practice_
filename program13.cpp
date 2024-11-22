// O(n)
//O(n) 
#include<bits/stdc++.h>
using namespace std;
int is_repiting(vector<int> &a,int n)
{
    map <int,int> mp;
    for(int i=0;i<n;i++)
    {
        if(mp.find(a[i])!=mp.end())
        {
            cout<<a[i];       
        }
        mp[a[i]]++;
    }
    cout<<endl;
    for(auto x:mp)
    {
        if (x.second>1)
        {
            cout<<x.first;
        }
    }
}
int is_repiting1(vector<int> &a,int n)
{
          int mark[n] = {
        0
      };
      for (int i = 0; i < n; i++) {
        if (mark[i] == 0) {
          for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
              mark[j] = 1;
            }
          }
        }
      }
      for (int i = 0; i < n; i++) {
        if (mark[i] == 1) {
          cout << a[i] << ",";
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
    is_repiting(a,n);
    cout<<endl;
    is_repiting1(a,n);
}
// #include<bits/stdc++.h>
// using namespace std;
// int fre_no(vector<int> & a,int n)
// {
// int i,j;
// vector<bool> visited(n,false);
// for(i=0;i<n;i++)
// {
//     if(visited[i]==true)
//     continue;
//     int count=1;
//     for(j=i+1;j<n;j++)
//     {
//         if(a[i]==a[j])
//         {
//         visited[j]=true;
//         count++;
//         }
//     }
//     cout << a[i] << " " << count << endl;
// }
// }
// int main()
// {
//     int n;
//     cout<<"ENter n :"<<endl;
//     cin>>n;
//     vector <int> a(n);
//     cout<<"enter array elements: "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     fre_no(a,n);
// }

#include<bits/stdc++.h>
using namespace std;
int fre_no(vector<int>& a,int n)
{
unordered_map <int,int> map_name;
for(int i=0;i<n;i++)
{
    map_name[a[i]]++;
}
for(auto x:map_name)
{
cout<<x.first<<" "<<x.second<<endl;
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
    fre_no(a,n);
}
#include<bits/stdc++.h>
using namespace std;
// bool isSubset(int arr1[], int m, int arr2[], int n){
    
//     if(m>n) return false;
//     unordered_map<int,bool> mp;
//     for(int i=0; i<n; i++){
//         mp[arr2[i]] = true;
// 	}
// 	for(int j=0;j<m;j++){
// 	    if(mp.count(arr1[j])==0){
// 	        return false;
// 	    }
// 	}
// 	return true;
// }
int subset(vector <int> &a,vector <int> &b,int n ,int m)
{
    unordered_map <int,int> mpp;
    bool res;
    for(int i=0;i<n;i++)
    {
        mpp[a[i]];
    }
    for(int i=0;i<m;i++)
    {
        if(mpp.find(b[i])==mpp.end())
        {
            cout<<"no its not subset";
            res=false;
            break;
        }
    }
    if(res)
    {
    cout<<"yes,it is subarray";
    }
}
int main()
{
    int n,m;
    cout<<"ENter n :"<<endl;
    cin>>n;
    static vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"ENter m :"<<endl;
    cin>>m;
    static vector <int> b(m);
    cout<<"enter subarray elements: "<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    cout<<endl;
    subset(a,b,n,m);
}
// // O(n^3)
// // O(1)
// #include<bits/stdc++.h>
// using namespace std;
// int max_product(vector<int> &a,int n)
// {
// int store=INT_MIN;
// for(int i=0;i<n-1;i++)
// {
//     for(int j=i+1;j<n;j++)
//     {
//         int product=1;
//         for(int k=i;k<=j;k++)
//         {
//         product*=a[k];
//         }
//         store=max(store,product);
//     }
// }
// return store;
// }
// int main()
// {
//     int n;
//     cout<<"ENter n :"<<endl;
//     cin>>n;
//     static vector <int> a(n);
//     cout<<"enter array elements: "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<max_product(a,n);
// }


// T.C=O(n)
// S.c=O(1)
// #include<bits/stdc++.h>
// using namespace std;

// int maxProductSubArray(vector<int>& nums) {
//     int prod1 = nums[0],prod2 = nums[0],result = nums[0];
    
//     for(int i=1;i<nums.size();i++) {
//         int temp = max({nums[i],prod1*nums[i],prod2*nums[i]});
//         prod2 = min({nums[i],prod1*nums[i],prod2*nums[i]});
//         prod1 = temp;
        
//         result = max(result,prod1);
//     }
    
//     return result;
// }
// int main() {
//     vector<int> nums = {-1,-2,0,-4,-5,6,7,10};
//     cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
//     return 0;
// }

// T.C=O(n)
// S.c=O(1)
// #include<bits/stdc++.h>
// using namespace std;
// int max_pro_subarray(vector<int> &a,int n)
// {
// int store=INT_MIN;
// int pre=1,suf=1;
// for(int i=0;i<n-1;i++)
// {
//     pre*=a[i];
//     suf*=a[n-i-1];
//     store=max(store,max(pre,suf));
// }
// return store;
// }
// int main()
// {
//     int n;
//     cout<<"ENter n :"<<endl;
//     cin>>n;
//     static vector <int> a(n);
//     cout<<"enter array elements: "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<max_pro_subarray(a,n);
// }


// T.c=O(n^2)
// S.c=O(1)
#include<bits/stdc++.h>
using namespace std;
int max_product(vector<int> &a,int n)
{
int result=a[0];
for(int i=0;i<n-1;i++)
{
    int prod=a[i];
    for(int j=i+1;j<n;j++)
    {
        result=max(result,prod);
        prod*=a[j];
    }
    result=max(result,prod);
}
return result;
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
    cout<<max_product(a,n);
}
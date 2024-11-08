// Time Complexity: O(n) As we traverse the array once.

// Space Complexity: O(1).
#include<bits/stdc++.h>
using namespace std;
int sum_array(vector<int>& a,int n)
{
    int total,sum=0;
for(auto i:a)
{
    sum=a[i]+sum;
}
return sum;
}
// Time Complexity: O(n) As we traverse the array once.

// Space Complexity: O(1).
int sum_array1(vector<int>& a,int n)
{
    int total,sum=0;
cout<<accumulate(a.begin(), a.end(), sum)<<endl;

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

sum_array1(a,n);
cout<<"method 1 or 2" <<endl<< sum_array(a,n);
}
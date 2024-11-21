#include<bits/stdc++.h>
using namespace std;
int at_last(vector<int> &a,int n,int value)
{
int b[n+1];
for(int i=0;i<n;i++)
{
 b[i]=a[i];
 b[n]=value;   
}
for(int i=0;i<=n;i++)
{
cout<<b[i];  
}
}    
int at_begin(vector<int> &a,int n,int value)
{
int b[n+1];
for(int i=0;i<n;i++)
{
 b[i+1]=a[i];
 b[0]=value;   
}
for(int i=0;i<=n;i++)
{
cout<<b[i];  
}
}    
int at_pos(vector<int> &a,int n,int value)
{
int key;
cout<<"ENter key :"<<endl;
cin>>key;
int b[n+1];
b[key]=value;
for(int i=0;i<n;i++)
{
 if(i>=key) 
 {
    b[i+1]=a[i];
 } 
 else if(i<key)
 {
    b[i]=a[i];
 }
}
for(int i=0;i<=n;i++)
{
cout<<b[i];  
}
}    
int main()
{
    int n,v;
    cout<<"ENter n :"<<endl;
    cin>>n;
    cout<<"ENter value :"<<endl;
    cin>>v;
    static vector <int> a(n);
    cout<<"enter array elements: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    at_pos(a,n,v);
    cout<<endl;
    at_last(a,n,v);
    cout<<endl;
    at_begin(a,n,v);
    cout<<endl;
    
}


// #include <bits/stdc++.h>
// using namespace std;
// void insertatbegin(int* arr,int n,int value)
// {
//     for(int i=n-1;i>=0;i--)
//     {
//         arr[i+1]=arr[i];
//     }
//     arr[0]=value;
// }
// int main()
// {
//     int n=8;
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatbegin(arr,n,value);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// Output:

// Before inserting the value at beginning:
// 10 9 14 8 20 48 16 9
// After inserting the value at beginning:
// 40 10 9 14 8 20 48 16 9

// Time Complexity: θ(n), since n iterations are required to shift the array element to right by 1 position

// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
void insertatEnd(int *arr, int n, int value)
{
    arr[n] = value;
}

// int main()
// {
//     int n=8;
//     int arr[9]={10,9,14,8,20,48,16,9};
//     int value=40;
//     cout<<"Before inserting the value at beginning:"<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     insertatEnd(arr,n,value);
//     cout<<"After inserting the value at beginning:"<<endl;
//     for(int i=0;i<=n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }
// Output:

// Before inserting the value at beginning:
// 10 9 14 8 20 48 16 9
// After inserting the value at beginning:
// 10 9 14 8 20 48 16 9 40

// Time Complexity: θ(n), since n iterations are required to shiftθ(1) since we need to directly add an element at the end of the array

// Space Complexity: O(1)


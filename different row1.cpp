#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
   swap(arr[0],arr[n-1]);
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }
}


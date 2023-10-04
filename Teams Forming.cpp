#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0;
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)sum+=(arr[i+1]-arr[i]);
    }
    cout<<sum<<endl;
}


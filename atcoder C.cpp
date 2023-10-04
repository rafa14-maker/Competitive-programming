#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long cnt=0;
    int mx=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cnt+=abs(arr[i]-mx);
    }
    cout<<cnt<<endl;
}


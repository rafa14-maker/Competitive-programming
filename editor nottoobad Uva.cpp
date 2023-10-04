#include<bits/stdc++.h>
using namespace std;

int f(string arr,string frr)
{
    int kp=0;
    for(int i=0;i<arr.size(),i<frr.size();i++)
    {
        if(arr[i]==frr[i])kp++;
        else break;
    }
    return frr.size()-kp;
}

void solve()
{
    int n;
    cin>>n;
    string arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        if(i==0)sum+=arr[i].size();
        else
        {
            sum+=f(arr[i-1],arr[i]);
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

#include<bits/stdc++.h>
using namespace std;

int arr[5005];

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    for(int i=1;i<=n;i++)cin>>arr[i];
    for(int i=1;i<=n;i++)arr[i]+=arr[i-1];

    vector<int>v;

    for(int i=1;i<=n;i++)
    {
        if(i-m>=0)
        {
            int p=arr[i]-arr[i-m];
            cout<<p<<endl;
            v.push_back(p);
        }
    }
    sort(v.rbegin(),v.rend());

    long long sum=0;
    for(int i=0;i<k;i++)sum+=v[i];

    cout<<sum<<endl;
}

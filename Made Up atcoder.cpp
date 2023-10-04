#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int arr[n+5],frr[n+5],krr[n+5];

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<=n;i++)
    {
        cin>>frr[i];
    }

    for(int i=1;i<=n;i++)
    {
        cin>>krr[i];
    }

   // vector<int>v;
    map<int,int>mp;

    for(int i=1;i<=n;i++)
    {
        int a=krr[i];
      mp[frr[a]]++;
    }

    long long  sum=0;

    for(int i=1;i<=n;i++)
    {
        sum+=mp[arr[i]];
    }

    cout<<sum<<endl;

}

int main()
{
    solve();
}

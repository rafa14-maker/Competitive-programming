#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int n;
   cin>>n;
  ll sum=0;
  ll p=0;

    for(int i=1;i<=n/2;i++)sum+=i;

    sum*=4;

    int arr[n+5];
    for(int i=1;i<n;i++)arr[i]=i;
    for(int i=2;i<=n;i++)arr[i]+=arr[i-1];

    for(int i=n-1;i>n/2;i--)
    {
        p+=arr[i]-arr[i-(n/2)+1];
    }

   cout<<sum+(p*4)<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
  //  solve();
}


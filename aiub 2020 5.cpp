#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin>>n;
    int cnt=0;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)
    {
       cin>>arr[i]>>frr[i];
    }
    for(int i=0;i<=n;i++)
    {
        bool tr=true;
        for(int j=arr[i];j<=frr[i];j++)
        {
            if(arr[j]<arr[i]||frr[j]>frr[i])tr=false;
        }
        if(tr)cnt=max(cnt,frr[i]-arr[i]+1);
    }
  if(cnt>0)  cout<<cnt<<endl;
  else cout<<-1<<endl;
}

int main()
{
    solve();
}

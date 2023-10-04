#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    int frr[n+5];
    int mx=1e9;
    for(int i=0;i<=n+5;i++)arr[i]=0;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        mx=min(mx,b-a+1);
     //   arr[a]+=1;
     //   arr[b+1]-=1;
    }

  //  for(int i=1;i<=n;i++)arr[i]+=arr[i-1];

    int idx=0;

    for(int i=1;i<=n;i++)
    {
        if(idx==mx)idx=0;
        arr[i]=idx;
        idx++;
    }

    cout<<mx<<endl;
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;

}

int main()
{
    solve();
}

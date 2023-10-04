#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    cin>>n;
    ll arr[n+5][n+5];
    int a = -1,b = -1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 0 )a=i,b=j;
        }
    }

    if(n==1)
    {
        cout<<1<<endl;
        return ;
    }

    if(a!=0)
    {
        ll sum = 0 ;
        for(int i=0;i<n;i++)sum+=arr[a-1][i];
        for(int i=0;i<n;i++)sum-=arr[a][i];
        arr[a][b] = sum;
    }
    else
    {
        ll  sum = 0 ;
        for(int i=0;i<n;i++)sum+=arr[a+1][i];
        for(int i=0;i<n;i++)sum-=arr[a][i];
        arr[a][b] = sum;
    }

    bool tr = true;

    ll sum = 0;

    for(int i=0;i<n;i++)sum+=arr[0][i];

    for(int j=1;j<n;j++)
    {
        ll idx = 0;
        for(int i=0;i<n;i++)idx+=arr[j][i];
        if(idx!=sum)tr=false;
    }

    sum = 0;

     for(int i=0;i<n;i++)sum+=arr[i][0];

    for(int j=1;j<n;j++)
    {
        ll idx = 0;
        for(int i=0;i<n;i++)idx+=arr[i][j];
        if(idx!=sum)tr=false;
    }

    sum = 0 ;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i][i];
    }

    ll idx = 0 ;

    for(int i=n-1,j=0;i>=0,j<n;i--,j++)
    {
        idx+=arr[i][j];
    }

    if(sum!=idx)tr=false;

   if(arr[a][b]==0)arr[a][b]=1;
    if(tr)cout<<arr[a][b]<<endl;
    else cout<<"-1"<<endl;

}

int main()
{
    solve();
}

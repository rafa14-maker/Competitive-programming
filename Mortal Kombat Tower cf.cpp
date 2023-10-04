#include<bits/stdc++.h>
using namespace std;

const int N= 2e5+5;
int arr[N],n,col=0;
int dp[N][2];
int cc[N][2];

int f(int pos,int turn)
{
    if(pos==n)
    {
        return 0;
    }
    if(cc[pos][turn%2] == col) {
        return dp[pos][turn%2];
    }

    int ans=1e8;
    if(turn%2==0)
    {
       ans=min(ans,arr[pos]+f(pos+1,turn+1));
        if(pos+1<n)
        {
          ans=min(ans,arr[pos]+arr[pos+1]+f(pos+2,turn+1));
        }
    }
    else
    {
       ans=min(ans,f(pos+1,turn+1));
      if(pos+1<n) ans=min(ans,f(pos+2,turn+1));
    }
    cc[pos][turn%2]=col;
    return dp[pos][turn%2]=ans;
}

void solve()
{
    cin>>n;
    ++col;
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<f(0,0)<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

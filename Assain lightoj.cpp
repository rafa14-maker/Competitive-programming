#include<bits/stdc++.h>
using namespace std;

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
int Set(int n,int pos)
{
    return (n | (1<<pos));
}
int off(int n,int pos)
{
    return (n & ~(1 << (pos)));
}


vector<int>adj[20];
int dp[(1<<16)+2][20];
int n,m;

int f(int mask,int counter,int pos)
{
    //cout<<mask<<endl;
  if(mask==0)return counter;

    if(dp[mask][counter]!=-1)return dp[mask][counter];

    int ans=999999;



    return dp[mask][counter]=ans;
}


int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            adj[i].clear();
        }

        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a-1].push_back(b-1);
        }
        memset(dp,-1,sizeof dp);
       printf("Case %d: %d\n",c,f((1<<(n))-1,0));
      // cout<<(1<<n)-1<<endl;
    }
}


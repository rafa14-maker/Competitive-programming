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

vector<int>adj[20];
int dp[(1<<16)+2][20];


int f(int mask,int counter)
{
    if(mask==(1<<n)-1)return counter;
    if(dp[mask][counter]!=-1)return dp[mask][counter];

    int ans=999999;

    for(int i=0;i<n;i++)
    {
        if(!Check(mask,i))
        {
            int p=mask;
            queue<int>q;
            q.push(i);
            while(!q.empty())
            {
                int f=q.front();
                q.pop();
                p=Set(p,f);
                for(int j=0;j<adj[f].size();j++)
                {
                    q.push(adj[f][j]);
                }
            }
           ans=min(ans, f(p,counter+1));
        }
    }
    return dp[mask][counter]=ans;
}

int n,m;

int main()
{
    int q;
    cin>>q;
    for(int c=1;c<=q;c++)
    {
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            adj[a-1].push_back(b-1);
        }
        memset(dp,-1,sizeof dp);

    }
}

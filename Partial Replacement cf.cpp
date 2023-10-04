#include<bits/stdc++.h>
using namespace std;

string s;
int n,k;
int ans;
int dp[55][55][55];

int f(int pos,int sum,int dis)
{
    if(pos==s.size())
    {
        return sum;
    }

    if(dp[pos][sum][dis]!=-1)return dp[pos][sum][dis];

    int ans=1e8+5;

    if(s[pos]=='*')
    {
        if(pos-dis>k)return 1e7;
        ans=min(ans,f(pos+1,sum+1,pos));
    }

    ans=min(ans,f(pos+1,sum,dis));

    return dp[pos][sum][dis]  = ans;

}

void solve()
{
 cin>>n>>k;
 cin>>s;
    int idx=0;
    ans=0;
    int sum=0;
    int a=-1,b=-1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='*')
        {
             b = i;
             if(a== -1)
             {
                 a=i;
             }
        }
    }

    if(a==b)
    {
        cout<<1<<endl;
        return ;
    }

    sum=2;
    memset(dp,-1,sizeof dp);

    cout<<f(a,0,a)+2<<"\n";

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

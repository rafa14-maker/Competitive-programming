#include<bits/stdc++.h>
using namespace std;

vector<int>v;

long long dp[30][10005],n;

long long f(int pos,long long sum)
{
   // cout<<pos<<" "<<sum<<endl;
    if(sum>n)return 0;
    if(sum==n)
    {
      //  cout<<pos<<" "<<sum<<endl;
        return 1;
    }
    if(pos>=v.size())return 0;

    if(dp[pos][sum]!=-1)return dp[pos][sum];

    long long ans=0;
    ans+=f(pos,sum+v[pos]);
   // ans+=f(pos+1,sum+v[pos]);
    ans+=f(pos+1,sum);
    return dp[pos][sum]=ans;
}

int main()
{
    for(int i=1;i<=21;i++)v.push_back(i*i*i);

   // for(int i=0;i<v.size();i++)cout<<v[i]<<endl;

    //int n;
    while(scanf("%lld",&n)!=EOF)
    {
        memset(dp,-1,sizeof dp);
        printf("%lld\n",f(0,0));
    }
}

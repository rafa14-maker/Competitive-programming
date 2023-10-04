#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> >v;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int maxa=v[k-1].first;
    long long dp[n+maxa+5];
    memset(dp,0,sizeof dp);

    for(int i=1;i<=n+maxa;i++)
    {
        for(int j=0;j<k;j++)
        {
            long long a=v[j].first;
            long long b=v[j].second;
            if(i-a>=0)
            {
                if(dp[i]==0)dp[i]=dp[i-a]+b;
                else dp[i]=min(dp[i-a]+b,dp[i]);
            }
            else
            {
                if(dp[i]==0)dp[i]=b;
                else dp[i]=min(dp[i],b);
            }
        }
    }
    long long ans=1e9+5;
    for(int i=n;i<=n+maxa;i++)ans=min(ans,dp[i]);
    cout<<ans<<endl;
}

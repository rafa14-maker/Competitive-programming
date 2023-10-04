#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<pair<string,string> >v;
    for(int i=0;i<n;i++)
    {
        string a,b;
        cin>>a;
        b=a;
        reverse(a.begin(),a.end());
        v.push_back(make_pair(b,a));
    }
    long long dp[n+5][4];
    memset(dp,-1,sizeof dp);
    dp[0][0]=0;
    dp[0][1]=arr[0];

    for(int i=1;i<n;i++)
    {
       // cout<<i<<endl;
        if(dp[i-1][0]!=-1&&v[i].first>=v[i-1].first)
        {
            if(dp[i][0]==-1)dp[i][0]=dp[i-1][0];
            else dp[i][0]=min(dp[i][0],dp[i-1][0]);
        }
        if(dp[i-1][1]!=-1&&v[i].first>=v[i-1].second)
        {
            if(dp[i][0]==-1)dp[i][0]=dp[i-1][1];
            else dp[i][0]=min(dp[i][0],dp[i-1][1]);
        }
         if(dp[i-1][0]!=-1&&v[i].second>=v[i-1].first)
        {
            if(dp[i][1]==-1)dp[i][1]=dp[i-1][0]+arr[i];
            else dp[i][1]=min(dp[i][1],dp[i-1][0]+arr[i]);
        }
        if(dp[i-1][1]!=-1&&v[i].second>=v[i-1].second)
        {
            if(dp[i][1]==-1)dp[i][1]=dp[i-1][1]+arr[i];
            else dp[i][1]=min(dp[i][1],dp[i-1][1]+arr[i]);
        }
    }
    long long p=dp[n-1][0],k=dp[n-1][1];
    //cout<<p<<" "<<k<<endl;
    if(p>-1&&k>-1)cout<<min(k,p)<<endl;
    else if(k>-1)cout<<k<<endl;
    else if(p>-1)cout<<p<<endl;
    else cout<<-1<<endl;
}

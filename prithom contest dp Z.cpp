#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
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
      long long dp[n+5][2];
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
    long long k;
    if(dp[n-1][0]==-1&&dp[n-1][1]==-1)k=-1;
    else if(dp[n-1][0]!=-1&&dp[n-1][1]!=-1)k=min(dp[n-1][0],dp[n-1][1]);
    else if(dp[n-1][0]!=-1)k=dp[n-1][0];
    else k=dp[n-1][1];

    cout<<k<<endl;
}

#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;
int dp[N][2];
int arr[N];

int main()
{
  int n;
  cin>>n;

  for(int i=1;i<=n;i++)cin>>arr[i];

  for(int i=1;i<=n;i++)
  {
      if(arr[i]>arr[i-1])dp[i][0]=dp[i-1][0]+1;
      else dp[i][0]=1;
  }

  for(int i=n;i>=1;i--)
  {
      if(arr[i]<arr[i+1])dp[i][1]=dp[i+1][1]+1;
      else dp[i][1]=1;
  }

  int ans=0;

  for(int i=1;i<=n;i++)
    {
        if(arr[i-1]+1<arr[i+1])
        {
            ans=max(ans,1+dp[i-1][0]+dp[i+1][1]);
        }
        else ans=max(ans,max(1+dp[i-1][0],1+dp[i+1][1]));
    }
  cout<<ans<<endl;
}

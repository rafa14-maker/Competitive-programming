#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
const int N = 1e5+5;


int main()
{
    int t,k;
    cin>>t>>k;

    int dp[N]={0};
        dp[0]=1;
      //  dp[1]=1;
        for(int i=1;i<N;i++)
        {
          dp[i]=(dp[i-1])%mod;
          if(i-k>=0)dp[i]=(dp[i]+dp[i-k])%mod;
        }
        for(int i=2;i<N;i++)
        {
            dp[i]= (dp[i]+dp[i-1])%mod;
           // dp[i]=(dp[i]%mod);
        }
   dp[0]=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        cout<<(dp[b]-dp[a-1]+mod)%mod<<endl;
    }
}

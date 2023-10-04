#include<bits/stdc++.h>
using namespace std;

int dp[10100];

int main()
{
//    freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);

    int n,m,t;
    while(cin>>n>>m>>t)
    {
        if(n==1|| m==1)
        {
            cout<<t<<endl;
            continue;
        }

    memset(dp,-1,sizeof dp);

        dp[0]=0;

        for(int i=0;i<t+5;i++)
        {
            int xx=0,yy=0;

            if(i-n>=0)
                xx=dp[i-n]+1;
            if(i-m>=0)
                yy=dp[i-m]+1;
            if(max(xx,yy)>0)
                dp[i]=max(xx,yy);
        }

        if(dp[t]>=0)
        {
            cout<<dp[t]<<endl;
            continue;
        }

        for(int i=t-1; i>-1; i--)
        {
            if(dp[i]>=0)
            {
              cout<<dp[i]<<" "<<t-i<<endl;
                break;
            }

        }
    }

    return 0;
}

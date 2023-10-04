#include<iostream>
#include<math.h>
using namespace std;

int maxn =1e6;

int main()
{
    int n;
    cin>>n;

   long long coin[25];
    coin[0]=1;
    for(int i=1;i<=20;i++)coin[i]=pow(2,i);

    int dp[maxn];

    dp[1]=1;
    dp[0]=1;

  /* for(int i=2;i<=maxn;i++)
    {
        for(int j=0;j<=20;j++)
        {
            if(i>=coin[j])
            {
                dp[i]=(dp[i]+dp[i-coin[j]])%10000000000;
            }
            else break;
        }
    }*/

    cout<<dp[1]<<endl;
}

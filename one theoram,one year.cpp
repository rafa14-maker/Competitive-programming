#include<bits/stdc++.h>
using namespace std;

int phi[501];
bool prime[100];

int dp[501][2];


void seive()
{
    memset(prime,true,100);

    for(int i=2;i*i<=100;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=100;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}

void p()
{
    for(int i=1;i<501;i++)
    {
        phi[i]=i;
    }
    for(int p=2;p<501;p++)
    {
        if(phi[p]==p)
        {
            for(int k=p;k<501;k+=p)
            {
                phi[k]-=phi[k]/p;
            }
        }
    }
}


void f()
{
   seive();

    for(int i=2;i<=501;i++)
    {
      int counter=0,found=0,p=i;

      for(int j=2;j<=i;j++)
      {
          if(i%j==0&&prime[j]==true)found++;
      }
      for(int j=2;j<=p;j++)
      {
          while(p%j==0&&prime[j]==true)
          {
              counter++;
              p/=j;
          }
      }

   dp[i][0]=counter;
   dp[i][1]=found;


    }
}

int main()
{
    f();
    p();

    int t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int a,b,sum=0;
        cin>>a>>b;

        for(int j=2;j<=501;j++)
        {
            if(dp[j][0]==b&&dp[j][1]==a)
            {
                sum+=phi[j];
            }
        }

        printf("Case %d: %d\n",i,sum);
    }


}

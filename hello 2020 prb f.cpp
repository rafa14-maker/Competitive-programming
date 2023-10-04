#include<bits/stdc++.h>
using namespace std;

int n,q,m,d;
int arr[205];

long long dp[205][11][15];

long long f(int pos,int sum,int counter)
{
   // cout<<sum<<endl;
    if(counter<0)return 0;
    if(pos==n)
    {
        if(sum==0&&counter==0)return 1;
        else return 0;
    }
   if(dp[pos][sum][counter]!=-1)return dp[pos][sum][counter];

    long long ans=0;
    ans+=f(pos+1,(sum+arr[pos])%d,counter-1);
    ans+=f(pos+1,sum,counter);
    return dp[pos][sum][counter]=ans;
}

int main()
{
    int counter=1;
    while(1)
    {

        scanf("%d %d",&n,&q);
        if(n==0&&q==0)break;
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);

        int flag=1;
    printf("SET %d:\n",counter);
        while(q--)
        {

         // cin>>d>>m;
         scanf("%d %d",&d,&m);
          memset(dp,-1,sizeof dp);
          //cout<<d<<" "<<m<<endl;
         // cout<<f(0,0,m)<<endl;
          printf("QUERY %d: %lld\n",flag,f(0,0,m));
          flag++;
        }
        counter++;
    }
}

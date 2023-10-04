#include<bits/stdc++.h>
using namespace std;

long long dp[210][25][25];
int n,q,m,d;
int arr[205];
int co=0;


long long f(int pos,int sum,int counter)
{
  //  cout<<sum<<" "<<counter<<endl;
   //f11if(sum==0&&counter==m)return 1;
   if(counter==m)
   {
       if(sum==0)return 1;
       else return 0;
   }

   if(pos>=n)return 0;

   if(dp[pos][sum][counter]!=-1)return dp[pos][sum][counter];

    long long ans=0;
    long long tmp=arr[pos]+sum;
    tmp=tmp%d;
    if(tmp<0)tmp+=d;

    ans+=f(pos+1,tmp,counter+1);
    ans+=f(pos+1,sum%d,counter);

    return dp[pos][sum][counter]=ans;
}

int main()
{
    while(scanf("%d %d",&n,&q))
    {
        if(n==0&&q==0)break;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        memset(dp,-1,sizeof dp);
        co++;
       // cin>>d>>m;
      //  cout<<f(0,0,m)<<endl;
       printf("SET %d:\n",co);
        for(int i=1;i<=q;i++)
        {
            scanf("%d %d",&d,&m);
            memset(dp,-1,sizeof dp);
            printf("QUERY %d: %lld\n",i,f(0,0,0));
        }
    }
}

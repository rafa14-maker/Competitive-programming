#include<bits/stdc++.h>
using namespace std;

int arr[]={5,10,20,50,100,200};
int dp[10][50500][500];
int memo[10][50500];
int coin[10];
int n;

long long max1(long long a,long long b)
{
    if(a>=b)return b;
    return a;
}

int f_shop(int pos,int sum,int counter)
{
   // cout<<pos<<" "<<sum<<" "<<counter<<endl;
    if(sum==0)return counter;
    if(pos==6)
    {
        if(sum==0)return counter;
        else return 99999;
    }
    if(sum<0)return 99999;
  if(dp[pos][sum][counter]!=-1)return  dp[pos][sum][counter];

    int ans=99999;

    ans=min(ans,f_shop(pos,sum-arr[pos],counter+1));
    ans=min(ans,f_shop(pos+1,sum-arr[pos],counter+1));
      ans=min(ans,f_shop(pos+1,sum,counter));


    return dp[pos][sum][counter]=ans;
}


long long f(int i,int sum,int counter)
{
 //  cout<<i<<" "<<sum<<" "<<counter<<endl;

    if(i==6)
    {
        if(sum>=n)
        {
            return counter+f_shop(0,sum-n,0);
        }

        else return 99999;
    }

    if(memo[i][sum]!=-1)return memo[i][sum];

   int  ans=9999;


    for(int j=0;j<=coin[i];j++)
    {
        ans=max1(ans,f(i+1,sum+(j*arr[i]),counter+j));
    }
    return memo[i][sum]=ans;
}


int main()
{


   while(1==1){

   // cin>>coin[0]>>coin[1]>>coin[2]>>coin[3]>>coin[4]>>coin[5];

    scanf("%d %d %d %d %d %d",&coin[0],&coin[1],&coin[2],&coin[3],&coin[4],&coin[5]);

      if(coin[0]==0&&coin[1]==0&&coin[2]==0&&coin[3]==0&&coin[4]==0&&coin[5]==0)break;

        double d;
        cin>>d;

     n= (unsigned)((d + 0.001) * 100);

     memset(memo,-1,sizeof memo);
      memset(dp,-1,sizeof dp);

     printf("%3lld\n",f(0,0,0));

   }
}

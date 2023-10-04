#include<bits/stdc++.h>
using namespace std;

int n;
int dp[105][50005];
int arr[105];
int counter;
int p;

int f(int pos,int sum,int fun)
{
   if(pos>=n)
   {
    // cout<<sum<<endl;
      return abs(sum-abs(sum-counter));
    // return 100000;
    //  else return 10000000;
   }
   if(dp[pos][sum]!=-1)return dp[pos][sum];

   int ans=9999999;

   ans =min(f(pos+1,sum+arr[pos],fun+1),f(pos+1,sum,fun));

   return dp[pos][sum]=ans;
}

int main()
{
    int q;
    cin>>q;
    while(q--){
     scanf("%d",&n);
     counter=0;
     for(int i=0;i<n;i++)
     {scanf("%d",&arr[i]);
     counter+=arr[i];
     }
    // counter/=2;
     memset(dp,-1,sizeof dp);
    printf("%d\n",f(0,0,0));
    }
}

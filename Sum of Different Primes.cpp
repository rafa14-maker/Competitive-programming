#include<bits/stdc++.h>
using namespace std;

#define r1 12000

bool prime[r1];
vector<int>arr;

long long n,k,p;

long long dp[1130][20][200];

void seive()
{
    for(int i=3;i<=r1;i+=2)prime[i]=true;
    prime[2]=true;

    for(int i=3;i*i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=r1;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    arr.push_back(2);

    for(int i=3;i<=r1;i+=2)
    {
        if(prime[i]==true)
        {
            arr.push_back(i);
        }
    }

}

long long f(int pos,long long sum,long long counter)
{
 // cout<<sum<<" "<<counter<<"\n";
   if(sum==0&&counter==0)
   {
      // cout<<pos<<" "<<arr[pos]<<endl;
       return 1;
   }
   if(arr[pos]>n)return 0;

   if(sum<0||counter<0)return 0;

   if(pos==arr.size())
   {
       if(sum==0&&counter==0)
       {
       //cout<<pos<<" "<<arr[pos]<<endl;
       return 1;
       }
       else return 0;
   }

  if(dp[sum][counter][pos]!=-1)return dp[sum][counter][pos];

   int ans=0;
   ans+=f(pos+1,sum-arr[pos],counter-1);
   ans+=f(pos+1,sum,counter);

   return dp[sum][counter][pos]=ans;
}

int main()
{
    seive();
    memset(dp,-1,sizeof dp);

    while(scanf("%d %d",&n,&k)==2)
    {
        if(n==0&&k==0)break;
       memset(dp,-1,sizeof dp);
       printf("%lld\n",f(0,n,k));
    }
   // cout<<arr.size()<<endl;
  //  for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";
}

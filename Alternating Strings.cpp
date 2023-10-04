#include<bits/stdc++.h>
using namespace std;

int dp[1000];
int n,k;
string arr;

int f(int pos)
{
   // cout<<pos<<endl;
    if(pos>=n)return 0;
    if(dp[pos]!=-1)return dp[pos];
    int ans=1e9;
    for(int i=0;i<k;i++)
    {
        if(i==0)ans=min(ans,1+f(pos+1));
        else
        {
            int flag=0;
            if(pos+i<n){
            for(int j=pos;j<pos+i;j++)
            {
                if(j+1<=pos+i&&arr[j]==arr[j+1])flag++;
            }
            if(flag>0)ans=min(ans,1+f(pos+k));
            }
        }
    }
    return dp[pos]=ans;
}

int main()
{
   int q;
   cin>>q;
  // getchar();O
   while(q--)
   {
      scanf("%d %d ",&n,&k);
      cin>>arr;
       memset(dp,-1,sizeof dp);
       cout<<f(0)-1<<endl;
      // cout<<n<<" "<<k<<endl;
       //getchar();
   }
}

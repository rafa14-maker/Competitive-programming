#include<bits/stdc++.h>
using namespace std;

int q,n,w,k;
int arr[1005][2];
int frr[1005];
int dp[1005][35];

int f(int pos,int wei)
{
    if(pos==n||wei==0)return 0;
    if(dp[pos][wei]!=-1)return dp[pos][wei];

    if(arr[pos][1]>wei)return dp[pos][wei]=f(pos+1,wei);
    return dp[pos][wei]=max(f(pos+1,wei),arr[pos][0]+f(pos+1,wei-arr[pos][1]));
}

int main()
{
    cin>>q;
    while(q--)
    {
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1];
        cin>>w;
        for(int i=0;i<w;i++)cin>>frr[i];
        long long sum=0;


        for(int i=0;i<w;i++)
        {
   memset(dp,-1,sizeof dp);

            sum+=f(0,frr[i]);
        }
        cout<<sum<<endl;
    }
}

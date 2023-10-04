#include<bits/stdc++.h>
using namespace std;

int n,x,y;
int arr[500][2];

int dp[305][355][355];

int f(int pos,int one,int two)
{
    if(pos==n)
    {
        if(one>=x&&two>=y)return 0;
        else return 1e9;
    }

    if(dp[pos][one][two]!=-1)return dp[pos][one][two];

    int ans = 1e8+7;

    ans = 1+f(pos+1,min(350,one+arr[pos][0]),min(350,two+arr[pos][1]));
    ans = min(ans,f(pos+1,one,two));

 return dp[pos][one][two]=ans;

}

void solve()
{
    cin>>n;
    cin>>x>>y;
    for(int i=0;i<n;i++)cin>>arr[i][0]>>arr[i][1];
    memset(dp,-1,sizeof dp);
    int ans  = f(0,0,0);
    if(ans==1e9)cout<<-1<<endl;
    else cout<<ans<<endl;
}

int main()
{
    solve();
}

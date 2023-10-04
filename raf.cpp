#include<bits/stdc++.h>
using namespace std;

//int dp[150][150];
string arr,frr;
int n,m;
int test;

/*
void path()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(arr[i-1]==frr[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
}
*/

string krr;

void f(int i,int j,string kp)
{
    //cout<<i<<" "<<j<<" "<<kp<<endl;
    if(i==n||j==m)
    {
        if(kp.size()>krr.size())krr=kp;
        else if(kp.size()==krr.size())
        {
            if(kp<krr)krr=kp;
        }
        return ;
    }
   // if(i==n||j==m)return;

    if(arr[i]==frr[j])
    {
        f(i+1,j+1,kp+arr[i]);
    }
    else
    {
        f(i+1,j,kp);
        f(i,j+1,kp);
    }
}



void solve()
{
    cin>>arr>>frr;
   // memset(dp,0,sizeof dp);
    n=arr.size(),m=frr.size();
    krr="";
    f(0,0,"");
    printf("Case %d: ",++test);
   if(krr.size()>0) cout<<krr<<endl;
   else cout<<":("<<endl;
//    path();
  //  cout<<dp[n][m]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string arr,frr,krr;
int dp[105][105];
int result;

int f(int i,int j)
{
    if(i==arr.size()||j==frr.size())
    {
        return 0;
    }
    if(dp[i][j]!= -1)return dp[i][j];
    int ans = 0;
    if(arr[i] == frr[j])
    {
        ans = max(ans,1+f(i+1,j+1));
    }
    else
    {
        ans = max(ans,f(i+1,j));
        ans = max(ans,f(i,j+1));
    }

    return dp[i][j] = ans;
}

void pri(int i,int j,int re)
{
    if(f(i,j)==re)
    {
        pri(i-1,j-1,re-1);
        krr += arr[i];
    }
    else
    {
        if(f(i-1,j)==re) pri(i-1,j,re);
        if(f(i,j-1)==re) pri(i,j-1,re);
    }

}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>arr>>frr;
   krr = "";
   memset(dp,-1,sizeof dp);
   result = f(0,0);
    pri(arr.size()-1,frr.size()-1,result);
    cout<< krr << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

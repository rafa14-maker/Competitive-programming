#include<bits/stdc++.h>
using namespace std;

int n,m,ans;
vector<pair<int,int> >v;

int dp[505][10005];

bool vis[505];

int f(int pos,int sp)
{
    if(pos==n)return 0;

    if(sp==0)return 0;

    if(sp<0)return -1e8;

    if(dp[pos][sp]!=-1)return dp[pos][sp];

    int a = v[pos].first;
    int b = v[pos].second;

    int ans =0,mn=0;
    vis[pos]=false;

    if(sp>=a&&sp>=b)  mn = 1+f(pos+1,sp - b);

    if(mn>ans)
    {
        ans=mn;
       vis[pos]=true;
    }

    mn = f(pos+1,sp);

    if(mn>ans)
    {
        ans=mn;
        vis[pos]=false;
    }
   // else vis[pos]=false;


    return dp[pos][sp] = ans;

}

void print(int pos,int sp,int an)
{
    int res = ans;

    for(int i=n;i>0;i--)
    {
        if(dp[i-1][sp]==res)continue;
        else
        {
            cout<<i<<" ";
           sp-=v[i-1].second;
           res-=1;
        }
    }
}


void solve()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    memset(dp,-1,sizeof dp);

   ans = f(0,m);

   printf("%d\n",ans);

  if(ans>0) print(0,m,ans);

//  printf("\n");

  /*for(int i=0;i<n;i++)
  {
      if(vis[i])printf("%d ",i+1);
  }*/

   printf("\n");

}

int main()
{
  //  cout<<1<<endl;
    solve();
}

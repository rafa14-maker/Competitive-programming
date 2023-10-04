#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool Check(int n,int pos)
{
    return (n & (1<<pos));
}
const int N = 2e5+5;
ll adj[N][35];

void solve()
{
   // cout<<"yes"<<endl;
  ll l,r;
  cin>>l>>r;
  ll sum =0 ,kp =(r-l+1);
  for(int i=0;i<=30;i++)
  {
      sum = max(sum,adj[r][i] - adj[l-1][i]);
  }
  cout << kp - sum<<endl;
}

int main()
{
    CherryFrog;
   for(int i=1;i<=N-5;i++)
    {
        ll idx =i ,kidx = 0;
        while(idx>0)
        {
            adj[i][kidx] = (1&idx);
            kidx++;
          idx>>=1;
        }
    }
    for(int i=0;i<=30;i++)
    {
        for(int j=0;j<=N;j++)
        {
            adj[j][i]+=adj[j-1][i];
        }
    }
   int q;cin>>q;while(q--)solve();
 //  solve();
}

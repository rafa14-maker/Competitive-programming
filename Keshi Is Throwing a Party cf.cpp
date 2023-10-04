#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e6+5;
vector<int>adj[N];

void cal()
{
    for(int i=0;i<N;i++)adj[i].clear();
}

void solve()
{
   // cout<<"yes"<<endl;
   cal();
   int n;
   cin>>n;
   int arr[n+5][2];
   for(int i=1;i<=n;i++)cin>>arr[i][0]>>arr[i][1];

  int idx = 0;

  for(int i=1;i<=n;i++)
  {
      if(idx==0)
      {
          adj[idx].push_back(i);
          idx++;
      }
      else
      {
          for(int j=0;j<idx;j++)
          {
              int a=0,b=0;
              for(int k=0;k<adj[j].size();k++)
              {
                  int v = adj[j][k];
                  if(v>i)a++;
                  else if(v<i)b++;
              }
              if(a<=arr[i][0]&&b<=arr[i][1])adj[j].push_back(i);
          }
          adj[idx].push_back(i);
              idx++;
      }
  }

  int sum = 0;
  for(int i=0;i<idx;i++)
  {
      int len = adj[i].size();
      sum = max(sum,len);
  }

  cout<<sum<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


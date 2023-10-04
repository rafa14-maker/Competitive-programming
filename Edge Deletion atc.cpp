#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll frr[305][305];
const ll mx = 1e18;
int n,m;
vector<pair<ll,pair<int,int> > >edge;

void solve()
{
   cin>>n>>m;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=n;j++)frr[i][j] = mx;
   }

   for(int i=1;i<=m;i++)
   {
      int a,b;
      ll c;
      cin>>a>>b>>c;
        edge.push_back(make_pair(c,make_pair(a,b)));
       frr[a][b]=c;
       frr[b][a]=c;
   }

   for(int k=1;k<=n;k++)
   {
       for(int i=1;i<=n;i++)
       {
           for(int j=1;j<=n;j++)
           {
               frr[i][j] = min(frr[i][j],frr[i][k]+frr[k][j]);
           }
       }
   }

   int ans = 0;

   for(int i=0;i<edge.size();i++)
   {
       int a = edge[i].second.first;
       int b = edge[i].second.second;
       int c = edge[i].first;
       for(int j=1;j<=n;j++)
       {
           if(frr[a][j]+frr[j][b]<=c)
           {
               ans++;
               break;
           }
       }
   }

   cout << ans << endl;

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}


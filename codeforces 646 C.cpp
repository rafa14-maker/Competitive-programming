#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<int>adj[1005];
bool tr[1005];

void solve()
{
   int n,x;
   cin>>n>>x;
   int frr[n+5];

   for(int i=1;i<=n;i++)frr[i]=0;
   for(int i=1;i<=n;i++)adj[i].clear();

  for(int i=0;i<n-1;i++)
   {
    int a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
    frr[a]++;
    frr[b]++;
  }

   if(frr[x]==1||frr[x]==0)
   {
       cout<<"Ayush"<<endl;
   }
   else if((n-1)%2==1)
   {
       cout<<"Ayush"<<endl;
   }
   else
   {
       cout<<"Ashish"<<endl;
   }
}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}


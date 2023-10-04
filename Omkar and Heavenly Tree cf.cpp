#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n,m;
   cin>>n>>m;
   int frr[n+5]={0};
   int arr[m+5][3];

   for(int i=0;i<m;i++)
   {
       cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
       frr[arr[i][1]]++;
   }

   int idx = 1e8+7 ,pdx = 0;

   for(int i=0;i<m;i++)
   {
       int v = frr[arr[i][1]];
       if(v<idx)
       {
           idx = v;
           pdx = arr[i][1];
       }
   }

   bool vis[n+5];
   memset(vis,false,sizeof vis);

  cout<<pdx<<endl;

   for(int i=0;i<m;i++)
   {
       if(arr[i][1]==pdx)
       {
           int a = arr[i][0];
           int b = arr[i][2];
          if(!vis[a]&&!vis[b])
          {
              cout<<a<<" "<<b<<endl;
              cout<<pdx<<" "<<a<<endl;
          }
           vis[a] = true;
           vis[b]=true;
       }
   }

   for(int i=1;i<=n;i++)
   {
       if(!vis[i]&&i!=pdx)
       {
           cout<<i<<" "<<pdx<<endl;
       }
   }

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}


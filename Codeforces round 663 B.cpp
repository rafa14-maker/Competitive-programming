#include<bits/stdc++.h>
using namespace std;

bool vis[150][150];
int n,m;



void solve()
{

   cin>>n>>m;

   for(int i=0;i<=n;i++)
   {
       for(int j=0;j<=m;j++)vis[i][j]=false;
   }



   int x,y;
   cin>>x>>y;

   while(1)
   {
       cout<<x<<" "<<y<<endl;
       vis[x][y]=true;
       y--;
       if(y<1)break;
   }
   y++;
   while(1)
   {
       x--;
       if(x<1)break;
       vis[x][y]=true;
       cout<<x<<" "<<y<<endl;
   }
   //y++;
   x++;
  int cnt=0;
  int i=x,j=y;
  while(1)
  {
     bool tr=true;
      if(cnt%2==0)
      {
          while(j+1<=m&&!vis[i][j+1])
          {
              cout<<i<<" "<<j+1<<endl;
              vis[i][j+1]=true;
               j++;
               tr=false;
          }
      }
      else
      {
          while(j-1>=1&&!vis[i][j-1])
          {
              cout<<i<<" "<<j-1<<endl;
              vis[i][j-1]=true;
               j--;
               tr=false;
          }
      }
       i++,cnt++;
      if(i>m)break;
  }
}

int main()
{
   // int q;cin>>q;while(q--)solve();

    solve();
}


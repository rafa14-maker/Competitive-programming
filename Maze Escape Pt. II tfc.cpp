#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,m;
char arr[505][505];
int vis[505][505];

bool f(int ik,int jk,int ak,int bk)
{
   queue<pair<int,pair<char,pair<int,int> > > >v;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           vis[i][j]=1e9;
           if(i==ik&&j==jk)
           {
               vis[i][j] = 0;
               v.push(make_pair(0,make_pair('O',make_pair(i,j))));
           }
       }
   }

   int cnt  = 0;

   while(!v.empty())
   {
       pair<int,pair<char,pair<int,int> > >f = v.front();
       v.pop();
       int idx = f.first;
       char c = f.second.first;
       int i = f.second.second.first;
       int j = f.second.second.second;
       if(i>=n||i<0||j>=m||j<0)continue;
      // if(vis[i][j])continue;
      if(idx>vis[i][j])continue;
     // vis[i][j] = idx;
      // cout << c << endl;
        if(c == '<')
       {
           if(arr[i][j]==c)cnt++;
          else continue;

          vis[i][j] = idx;
           // v.push(make_pair('<',make_pair(i-1,j)));
          // v.push(make_pair('>',make_pair(i,j-1)));
           if(vis[i][j+1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('<',make_pair(i,j+1))));
         if(vis[i][j-1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('>',make_pair(i,j-1))));
         if(vis[i+1][j]>=vis[i][j]+1) v.push(make_pair(idx+1,make_pair('^',make_pair(i+1,j))));
          if(vis[i-1][j]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('v',make_pair(i-1,j))));
       }
       else if(c == '>')
       {
             if(arr[i][j]==c)cnt++;
           else continue;

           vis[i][j] = idx;
        //   v.push(make_pair('>',make_pair(i,j-1)));
           if(vis[i][j+1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('<',make_pair(i,j+1))));
         if(vis[i][j-1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('>',make_pair(i,j-1))));
         if(vis[i+1][j]>=vis[i][j]+1) v.push(make_pair(idx+1,make_pair('^',make_pair(i+1,j))));
          if(vis[i-1][j]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('v',make_pair(i-1,j))));

       }
       else if(c == '^')
       {
             if(arr[i][j]==c)cnt++;
           else continue;

           vis[i][j] = idx;
            if(vis[i][j+1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('<',make_pair(i,j+1))));
         if(vis[i][j-1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('>',make_pair(i,j-1))));
         if(vis[i+1][j]>=vis[i][j]+1) v.push(make_pair(idx+1,make_pair('^',make_pair(i+1,j))));
          if(vis[i-1][j]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('v',make_pair(i-1,j))));
       }

       else if(c == 'v')
       {
             if(arr[i][j]==c)cnt++;
          else continue;

          vis[i][j] = idx;
          if(vis[i][j+1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('<',make_pair(i,j+1))));
         if(vis[i][j-1]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('>',make_pair(i,j-1))));
         if(vis[i+1][j]>=vis[i][j]+1) v.push(make_pair(idx+1,make_pair('^',make_pair(i+1,j))));
          if(vis[i-1][j]>=vis[i][j]+1)  v.push(make_pair(idx+1,make_pair('v',make_pair(i-1,j))));
       }
   }

   /*for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout<<vis[i][j]<<" ";
       }
       cout<<endl;
   }*/

   if(vis[ak][bk]!=1e9+5)return true;
   return false;
}

void solve()
{
   // cout<<"yes"<<endl;

  // int n,m;
   cin>>n>>m;

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)cin>>arr[i][j];
 }

  int cnt = 0;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          for(int a=0;a<n;a++)
          {
              for(int b=0;b<m;b++)
              {
                  if(a!=i&&b!=j)if(f(i,j,a,b)&&f(i,j,a,b))cnt++;
              }
          }
      }
  }

  cout << cnt << endl;


}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
  // int q;cin>>q;while(q--)solve();
  solve();
}


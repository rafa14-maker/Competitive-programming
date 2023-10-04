#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;
  int n,m;
  cin>>n>>m;
  char arr[n+5][m+5];
   bool vis[n+5][m+5];

   bool tr = true;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)cin>>arr[i][j],vis[i][j]=false;
  }

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(arr[i][j]=='1')
          {
              if(i-1>=0&&arr[i-1][j]=='0')vis[i][j]=true;
              if(j-1>=0&&arr[i][j-1]=='0')vis[i][j]=true;
               if(i-1>=0&&arr[i-1][j]=='1'&&vis[i-1][j]==true)vis[i][j]=true;
              if(j-1>=0&&arr[i][j-1]=='1'&&vis[i][j-1]==true)vis[i][j]=true;
          }
      }
  }

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(!vis[i][j]&&arr[i][j]=='1')
          {
              tr=false;
          }
      }
  }

  if(!tr)
  {
      cout<<"-1"<<endl;
      return ;
  }

  vector<pair<pair<int,int>,pair<int,int> > >v;

  for(int i=n-1;i>=0;i--)
  {
      for(int j=m-1;j>=0;j--)
      {
          if(arr[i][j]=='1')
          {
              if(i-1>=0&&arr[i-1][j]=='1')v.push_back(make_pair(make_pair(i-1,j),make_pair(i,j)));
             else if(j-1>=0&&arr[i][j-1]=='1')v.push_back(make_pair(make_pair(i,j-1),make_pair(i,j)));
              else if(i-1>=0&&arr[i-1][j]=='0')v.push_back(make_pair(make_pair(i-1,j),make_pair(i,j)));
             else if(j-1>=0&&arr[i][j-1]=='0')v.push_back(make_pair(make_pair(i,j-1),make_pair(i,j)));
          }
      }
  }

  cout << v.size()<<endl;

  for(int i=0;i<v.size();i++)
  {
      pair<int,int>f = v[i].first;
      pair<int,int>s = v[i].second;
      cout << f.first+1<<" "<<f.second+1<<" "<<s.first+1<<" "<<s.second+1<<endl;
  }





}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


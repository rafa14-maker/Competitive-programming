#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e3+5;

char arr[25][25];
int n,m;
int test;

void solve()
{
  //  cout<<"yes"<<endl;
  cin>>m>>n;

  int a1,a2;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          cin>>arr[i][j];
          if(arr[i][j] == '@')
          {
              a1 = i;
              a2 = j;
          }
      }
  }
  arr[a1][a2] = '0';

  queue<pair<int,int> >pq;
  pq.push(make_pair(a1,a2));

  while(!pq.empty())
  {
      pair<int,int>f = pq.front();
      pq.pop();
      int i = f.first;
      int j = f.second;
      if(arr[i][j] == '#')continue;

       arr[i][j] = '0';

    if(i+1<n&&arr[i+1][j]=='.') pq.push(make_pair(i+1,j));
    if(j+1<m&&arr[i][j+1]=='.')  pq.push(make_pair(i,j+1));
     if(i-1>=0&&arr[i-1][j]=='.') pq.push(make_pair(i-1,j));
     if(j-1>=0&&arr[i][j-1]=='.') pq.push(make_pair(i,j-1));

  }

  int cnt = 0;

  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      {
          if(arr[i][j] == '0')cnt++;
      }
  }


  cout <<"Case "<<++test<<":"<<" "<<cnt<<"\n";




}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


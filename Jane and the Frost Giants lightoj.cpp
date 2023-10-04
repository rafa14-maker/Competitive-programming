#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int n,m;
int test;
char arr[1009][1009];
int fire[1009][1009];
int jane[1009][1009];
queue<pair<int,pair<int,int> > >pq;

const int N = 1e5+5;

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>m;

   int af=-1,bf=-1,aj=-1,bj=-1;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>arr[i][j];
           fire[i][j] = N;
           jane[i][j] = N;
           if(arr[i][j] == 'F')
           {
                pq.push(make_pair(0,make_pair(i,j)));
           }
           if(arr[i][j] == 'J')aj = i, bj = j;
       }
   }

  while(!pq.empty())
  {
    //  cout<<"ok"<<endl;
      pair<int,pair<int,int> >f = pq.front();
      pq.pop();
      int d = f.first;
      int i = f.second.first;
      int j = f.second.second;
      if(i<0||j<0||i>=n||j>=m)continue;
      if(arr[i][j]=='#')continue;
      if(fire[i][j]>d)
      {
          fire[i][j] = d;
          pq.push(make_pair(d+1,make_pair(i+1,j)));
          pq.push(make_pair(d+1,make_pair(i,j+1)));
          pq.push(make_pair(d+1,make_pair(i-1,j)));
          pq.push(make_pair(d+1,make_pair(i,j-1)));
      }
  }

 //cout << aj<<" "<<bj<<endl;
 if(aj!=-1&&bj!=-1)  pq.push(make_pair(0,make_pair(aj,bj)));

  while(!pq.empty())
  {
      pair<int,pair<int,int> >f = pq.front();
      pq.pop();
      int d = f.first;
      int i = f.second.first;
      int j = f.second.second;
      if(i<0||j<0||i>=n||j>=m)continue;
      if(arr[i][j]=='#'||arr[i][j]=='F')continue;
      if(jane[i][j]>d)
      {
         // cout <<"ko"<<endl;
          jane[i][j] = d;
          pq.push(make_pair(d+1,make_pair(i+1,j)));
          pq.push(make_pair(d+1,make_pair(i,j+1)));
          pq.push(make_pair(d+1,make_pair(i-1,j)));
          pq.push(make_pair(d+1,make_pair(i,j-1)));
      }
  }

  int ans = N;

  for(int i=0;i<n;i++)
  {
      if(arr[i][0]!='#'&&arr[i][0]!='F'&&fire[i][0]>jane[i][0])ans = min(ans,jane[i][0]);
      if(arr[i][m-1]!='#'&&arr[i][m-1]!='F'&&fire[i][m-1]>jane[i][m-1])ans = min(ans,jane[i][m-1]);
  }

  for(int j=0;j<m;j++)
  {
      if(arr[0][j]!='#'&&arr[0][j]!='F'&&fire[0][j]>jane[0][j])ans = min(ans,jane[0][j]);
      if(arr[n-1][j]!='#'&&arr[n-1][j]!='F'&&fire[n-1][j]>jane[n-1][j])ans = min(ans,jane[n-1][j]);
  }

 /* for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)cout<<jane[i][j]<<" ";
      cout<<endl;
  }*/


  if(ans >= N)printf("Case %d: IMPOSSIBLE\n",++test);
  else printf("Case %d: %d\n",++test,ans+1);

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

8
4 3
###
#J#
FFF
FFF
3 3
###
#J#
#.#
5 7
.......
.....J.
.......
.......
.......
3 8
.......F
....J...
.##F.#..
3 6
.F.#.F
#F..J#
.F#..F
9 9
....F....
.........
.........
.........
....J....
.........
.........
.........
....F....
15 20
F..#################
..................J#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
...................#
2 4
FFFF
JFFF

*/


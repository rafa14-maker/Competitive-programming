#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int m,n,q;
char arr[505][505];
int frr[505][505];
int vis[505][505];
int cnt;
int test;

void dfs(int ik,int jk)
{
    queue<pair<int,int> >pq;
    pq.push(make_pair(ik,jk));

    while(!pq.empty())
    {
        pair<int,int>f = pq.front();
        pq.pop();
        int i = f.first;
        int j = f.second;
        if(vis[i][j])continue;
        vis[i][j] = true;
        if(arr[i][j]=='C')cnt++;
        if(i+1<n&&arr[i+1][j]!='#')pq.push(make_pair(i+1,j));
         if(j+1<m&&arr[i][j+1]!='#')pq.push(make_pair(i,j+1));
          if(i-1>=0&&arr[i-1][j]!='#')pq.push(make_pair(i-1,j));
           if(j-1>=0&&arr[i][j-1]!='#')pq.push(make_pair(i,j-1));
    }

}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>m>>q;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>arr[i][j];
           frr[i][j] = 0;
           vis[i][j] = false;
       }
   }

   int idx =0;

   queue<pair<int,pair<int,int> > >pq;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(frr[i][j]==0&&!vis[i][j]&&arr[i][j]!='#')
           {
               cnt = 0;
               dfs(i,j);
              // frr[i][j] = cnt;
               pq.push(make_pair(cnt,make_pair(i,j)));
           }
       }
   }

   while(!pq.empty())
   {
       pair<int,pair<int,int> >f = pq.front();
       pq.pop();
       int d = f.first;
       int i = f.second.first;
       int j = f.second.second;
       if(arr[i][j]=='#')continue;
       if(frr[i][j]<d)
       {
           frr[i][j] = d;
           if(i+1<n&&arr[i+1][j]!='#')pq.push(make_pair(d,make_pair(i+1,j)));
           if(j+1<m&&arr[i][j+1]!='#')pq.push(make_pair(d,make_pair(i,j+1)));
           if(i-1>=0&&arr[i-1][j]!='#')pq.push(make_pair(d,make_pair(i-1,j)));
           if(j-1>=0&&arr[i][j-1]!='#')pq.push(make_pair(d,make_pair(i,j-1)));
       }
   }




printf("Case %d:\n",++test);
 while(q--)
 {
     int i,j;
     cin>>i>>j;
     printf("%d\n",frr[i-1][j-1]);
 }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
4 5 9
.C#..
..#..
C.#.C
..#..

*/



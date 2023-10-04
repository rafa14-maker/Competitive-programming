#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;
char arr[25][25];
int frr[25][25];

void cal()
{
    for(int i=0;i<25;i++)
    {
        for(int j=0;j<25;j++)frr[i][j]=505;
    }
}


void solve()
{
   // cout<<"yes"<<endl;
   cal();
    int n,m;
    cin>>n>>m;
    int h1,h2;
    queue<pair<int,pair<int,int> > >pq;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]>='a'&&arr[i][j]<='c')v.push_back(make_pair(i,j));
            if(arr[i][j]=='h')
            {
               pq.push(make_pair(0,make_pair(i,j)));
            }
        }
    }

    while(!pq.empty())
    {
        pair<int,pair<int,int> > f = pq.front();
        pq.pop();
        int d = f.first;
        int i = f.second.first;
        int j = f.second.second;
        if(i<0||i>=n||j<0||j>=m)continue;
        if(arr[i][j]=='m'||arr[i][j]=='#')continue;
        if(frr[i][j]>d)
        {
            frr[i][j] = d;
            pq.push(make_pair(d+1,make_pair(i+1,j)));
             pq.push(make_pair(d+1,make_pair(i,j+1)));
              pq.push(make_pair(d+1,make_pair(i-1,j)));
               pq.push(make_pair(d+1,make_pair(i,j-1)));
        }
    }

  int mx = 0;

  for(int i=0;i<v.size();i++)
  {
      int a = v[i].first;
      int b =v[i].second;
      mx = max(mx,frr[a][b]);
  }

    printf("Case %d: %d\n",++test,mx);




}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


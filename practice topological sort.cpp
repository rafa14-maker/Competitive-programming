#include<bits/stdc++.h>
using namespace std;

int in[200];
vector<int>adj[200];
bool vis[200];

void f_top(int n)
{
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        cout<<f<<" ";
        vis[f]=true;
        for(int i=0;i<adj[f].size();i++)
        {
            int k=adj[f][i];
            in[k]=in[k]-1;
           if(in[k]==0)q.push(k);
        }
    }
}

int main()
{
  int n,k;
  cin>>n>>k;
  while(k--)
  {
      int a,b;
      cin>>a>>b;
      adj[a].push_back(b);
      in[b]++;
  }
 for(int i=1;i<=n;i++)
 {
     if(vis[i]==false&&in[i]==0)f_top(i);
    // cout<<endl;
 }
}

/*

9 11
1 2
1 3
2 3
2 4
3 8
6 8
7 3
7 6
5 6
9 7
9 5

*/


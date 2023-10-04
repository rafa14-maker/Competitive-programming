#include<bits/stdc++.h>
using namespace std;

int col[250];
vector<int>adj[205];
int n,m;
bool tr;
int ans;

void f(int u)
{
    queue<int>pq;
    pq.push(u);
    col[u]=0;
    int zero=0,one=0;
    zero++;
    while(!pq.empty())
    {
        int f=pq.front();
        pq.pop();
       // cout<<f<<" "endl;
        for(int i=0;i<adj[f].size();i++)
        {
            int v=adj[f][i];
            if(col[v]==1e7)
            {
                col[v]=1-col[f];
                if(col[v]==0)zero++;
                else one++;
                pq.push(v);
            }
            else if(col[v]==col[f])
            {
                tr=false;
            }
        }
    }
   if(one>=1) ans+=min(one,zero);
   else ans+=1;
}

void solve()
{
 cin>>n>>m;
 for(int i=0;i<n;i++)
 {
     adj[i].clear();
     col[i]=1e7;
 }
 for(int i=0;i<m;i++)
 {
     int a,b;
     cin>>a>>b;
     adj[a].push_back(b);
     adj[b].push_back(a);
 }
 tr=true;

 if(m==0)
 {
     cout<<n<<endl;
     return ;
 }
 ans=0;

 for(int i=0;i<n;i++)
 {
     if(col[i]==1e7)
     {
         f(i);
     }
 }
 if(!tr)cout<<-1<<endl;
 else
 {
    cout<<ans<<endl;
 }
 }

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

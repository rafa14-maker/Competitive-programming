#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string s;
int n;
const int N = 1e6+5;
vector<int>adj[N];
int parent[N];
int cnt;
int test;


void f(int a,int b)
{
    if(a==b)
    {
        cnt++;
        return ;
    }
    if(parent[b] == a)
    {
      if(s[b]==s[a])  cnt++;
        return ;
    }

    int c = parent[b];

    for(int i=0;i<adj[a].size();i++)
    {
        int v = adj[a][i];
        if(s[v] == s[c])
        {
            f(v,c);
        }
    }

}


void solve()
{
  //  cout<<"yes"<<endl;
 cin>>n>>s;
 for(int i=0;i<N;i++)adj[i].clear();
 cnt =0;

 for(int i=0;i<n-1;i++)
 {
     int a,b;
     cin>>a>>b;
     a--;
     b--;
     parent[b]  = a;
     adj[a].push_back(b);
 }

 for(int i=1;i<s.size();i++)
 {
     if(s[0] == s[i])
     {
         f(0,i);
     }
 }

// dfs(0,"","");
 //cout<<cnt<<endl;

 int p = n;
 int q = cnt+1;
 int kp = __gcd(p,q);
 p/=kp;
 q/=kp;

 printf("Case %d: %d/%d\n",++test,q,p);

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}


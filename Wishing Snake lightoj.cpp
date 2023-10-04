#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e4+5;

vector<int>adj[N];
vector<int>vk;
vector<int>tops;
vector<int>scc[N];
bool vis[N];
set<int>st;
bool vistops[N];
int low[N];
int strong[N];
int num[N];
int cnt,SC,ti;
int n,m;
int test;

void cal()
{
    cnt = 0;
    ti=0;
    tops.clear();
    for(int i=0;i<N;i++)
    {
        adj[i].clear();
        scc[i].clear();
        vis[i] = true;
        low[i] =0;
        strong[i]=0;
        num[i] = 0;
    }
    vk.clear();
}

void f(int u)
{
    vistops[u] = true;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!vistops[v])f(v);
    }
    tops.push_back(u);
}

void fSSC(int u)
{
    low[u]=num[u]=cnt++;
    vis[u]=true;
    vk.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(num[v]==0)
        {
            fSSC(v);
        }
        if(vis[v])
        {
            low[u]=min(low[u],low[v]);
        }
    }
    if(low[u]==num[u])
    {
     //  printf("SSC %d:",++SC);
    //   cout<<u<<" ";

    vector<int>op;

       while(1)
       {
           int f=vk.back();
       //    cout<<f<<" ";
           vis[f]=false;
           op.push_back(f);
           vk.pop_back();
           if(f==u)break;
       }
      // cout<<endl;

       if(op.size()>1)
       {
           for(int i=0;i<op.size();i++)
           {
               int ck = op[i];
               strong[ck] = ti;
               scc[ti].push_back(ck);
           }
           ti++;
       }

    }
  //  printf("\n");
}


void dfs(int u)
{
    vis[u] = true;

  //  cout << u<<" "<<endl;

    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];

        if(!vis[v]||strong[v]>0)
        {
            if(strong[v]>0)
            {
                bool tr = false;
                int idx = strong[v];
            //    cout << idx<<" "<<"index"<<endl;
                for(int k=0;k<scc[idx].size();k++)
                {
                    if(tr)break;
                    int vk = scc[idx][k];
                    for(int p=0;p<adj[vk].size();p++)
                    {
                        if(tr)break;
                        int vs = adj[vk][p];
                        if(!vis[vs])
                        {
                            tr = true;
                            vis[vs] = true;
                            dfs(vs);
                        }
                    }
                }
            }
            else  if(!vis[v])dfs(v);
            break;
        }
    }

}

void solve()
{
   // cout<<"yes"<<endl;
   st.clear();
  cin>>n;
  cal();
  for(int i=0;i<n;i++){
        cin>>m;
  for(int i=0;i<m;i++)
  {
      int a,b;
      cin>>a>>b;
      st.insert(a);
      st.insert(b);
      adj[a].push_back(b);
  }
  }

   memset(vistops,false,sizeof vistops);
   memset(vis,false,sizeof vis);

  // cout << st.size()<<endl;

   for(auto it = st.begin();it!=st.end();it++)
   {
       int  uo = *it;
       if(!vistops[uo])  f(uo);
   }

  //for(int i=0;i<tops.size();i++)cout<<tops[i]<<" ";cout<<endl;

  for(int i=tops.size()-1;i>=0;i--)
  {
      int k = tops[i];
      if(num[k]==0&&!vis[k])fSSC(k);
  }

 // cout << ti<<endl;

 /* for(int i=0;i<ti;i++)
  {
      for(int j=0;j<scc[i].size();j++)
      {
          cout<<scc[i][j]<<" ";
      }
      cout<<endl;
  } */


  int str = tops[tops.size()-1];

//  cout << st << endl;

  dfs(str);


   bool tr = true;

    for(int i=0;i<ti;i++)
   {
      bool pk = false;
      for(int j=0;j<scc[i].size();j++)
      {
         // cout<<scc[i][j]<<" ";
         int po = scc[i][j];
         if(vis[po] == true)pk = true;
      }

      if(pk){
      for(int j=0;j<scc[i].size();j++)
      {
         // cout<<scc[i][j]<<" ";
         int po = scc[i][j];
         vis[po] = true;
      }
      }

   //   cout<<endl;
    }

//    bool tr = true;

    for(auto it = st.begin();it!=st.end();it++)
    {
        if(!vis[*it])tr= false;
    }


   printf("Case %d: ",++test);
   if(tr)printf("YES\n");
   else printf("NO\n");

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

1
1
7
1 2
2 3
3 1
4 5
5 6
6 4
1 6

1
1
2
0 9
0 11

*/


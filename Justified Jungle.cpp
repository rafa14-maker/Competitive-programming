#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+7;

int n;
vector<int>adj[N];
bool tr[N];
vector<int>fac;
int cut;
vector<int>top;
bool ck;


void dfs(int u,int cnt)
{
    cout<<"dfs"<<" "<<u<<endl;
    if(cnt<0)return ;
    tr[u]=true;
    if(cnt==0)ck=true;
   // cout<<"dfs"<<" "<<u<<endl;
    for(int i=0;i<adj[u].size();i++)
    {
        int v = adj[u][i];
        if(!tr[v]&&cnt>0)dfs(v,cnt-1);
        else cut++;
    }
}

void dis()
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            fac.push_back(i);
            if(n/i!=i)fac.push_back(n/i);
        }
    }
}

void solve()
{
   scanf("%d",&n);
   for(int i=0;i<n-1;i++)
   {
       int a,b;
       scanf("%d %d",&a,&b);
       //if(a>b)swap(a,b);
       adj[a].push_back(b);
       adj[b].push_back(a);
   }
   dis();

   vector<int>v;

   for(int i=0;i<fac.size();i++)
   {
       int sp = fac[i];
     //  cout<<sp<<endl;

       memset(tr,false,sizeof tr);

       cut=0;
       bool pk=true;

       for(int i=1;i<=n;i++)
       {
           if(!tr[i])
           {
            ck=false;
               cout<<"kp"<<" "<<i<<endl;
               dfs(i,sp-1);
               if(!ck)pk=false;
           }
       }

       v.push_back(cut);
   }
    v.push_back(n-1);

   sort(v.begin(),v.end());


   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;



}

int main()
{
   solve();
}

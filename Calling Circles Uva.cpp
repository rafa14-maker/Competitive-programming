#include<bits/stdc++.h>
using namespace std;

int n,m;
string arr[50];
map<string,int>mp;
vector<int>adj[50];
vector<int>vk;
bool vis[50];
int num[50];
int low[50];
int cnt,test;

void f(int u)
{
    num[u]=low[u]=++cnt;
    vis[u]=true;
    vk.push_back(u);
    for(int i=0;i<adj[u].size();i++)
    {
        int v=adj[u][i];
        if(num[v]==0)
        {
            f(v);
          //  low[u]=min(low[u],low[v]);
        }
            low[u]=min(low[u],num[v]);
    }
    if(num[u]==low[u])
    {
        while(1)
        {
            int f=vk.back();
            vk.pop_back();
            vis[f]=false;
           if(f==u)
           {
               cout<<arr[f]<<endl;
               break;
           }
           else cout<<arr[f]<<", ";
        }
       // cout<<endl;
    }
}

void solve()
{
    mp.clear();
    vk.clear();
   // st.clear();
    int idx=0;
    for(int i=0;i<n;i++)adj[i].clear(),vis[i]=false,num[i]=low[i]=0;

    for(int i=0;i<m;i++)
    {
       string kp,pk;
       cin>>kp>>pk;
       int a,b;
       a=mp[kp];
       if(a==0)
       {
           idx++;
           a=idx;
           mp[kp]=idx;
           arr[idx]=kp;
       }
        b=mp[pk];
       if(b==0)
       {
           idx++;
           b=idx;
           mp[pk]=idx;
           arr[idx]=pk;
       }
     //  cout<<a<<" "<<b<<endl;
       adj[a].push_back(b);
    }
    cnt=0;
   // for(auto it=st.begin();it!=st.end();it++)cout<<*it<<endl;
    if (test != 0) cout << endl;
        cout << "Calling circles for data set " << ++test << ":" << endl;
   for(int i=1;i<=n;i++)
   {
       if(num[i]==0)f(i);
   }

}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}

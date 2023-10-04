#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;


void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   for(int i=0;i<n;i++)cin>>arr[i];
   bool vis[N];
   vector<int>adj[N];
   vector<int>v;
   for(int i=0;i<N;i++)vis[i]=false;
   for(int i=0;i<n;i++)
   {
       int a=arr[i];
       adj[a].push_back(i);
       if(vis[a]==false)
       {
           v.push_back(a);
           vis[a]=true;
       }
   }
   int idx=0,pre=0,mn=-1;

  // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;

   while(1)
   {
       bool tr=false;
       for(int i=0;i<v.size();i++)
       {
           int k=v[i];
           if(adj[k].size()>pre)
           {
               tr=true;
               if(mn==-1)mn=adj[k][pre];
               else mn=abs(mn-adj[k][pre]);
               if(mn!=-1)
               {
                   idx=max(mn,idx);
               }
           }
       }
       if(!tr)break;
       pre++;
   }
   cout<<idx<<endl;
}


int main()
{
    int q;cin>>q;while(q--)solve();

   // solve();
}


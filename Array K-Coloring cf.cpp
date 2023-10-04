#include<bits/stdc++.h>
using namespace std;

vector<int>adj[5005];

void solve()
{
   int n,k;
   cin>>n>>k;
   int arr[n+5];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   bool tr=true;

   for(int i=0;i<n;i++)
   {
       int u=arr[i];
       bool pk=true;
       for(int j=1;j<=k;j++)
       {
           if(adj[j].size()==0)adj[j].push_back(u),pk=false;
           else
           {
               bool kp=true;
               for(int a=0;a<adj[j].size();a++)if(adj[j][a]==u)kp=false;
               if(kp)adj[j].push_back(u),pk=false;
           }
           if(!pk)break;
       }
       if(pk)tr=false;
   }

   if(!tr)
   {
       cout<<"NO"<<endl;
       return ;
   }

 // cout<<"kpkx"<<endl;
   for(int i=1;i<=k;i++)
   {
       if(adj[i].size()==0)
       {
         //  cout<<i<<endl;
           for(int j=1;j<=k;j++)
           {
               if(adj[j].size()>1)
               {
                   int v=adj[j].back();
                   adj[j].pop_back();
                   adj[i].push_back(v);
                   break;
               }
           }
       }
   }


  /* for(int i=1;i<=k;i++)
   {
       for(int j=0;j<adj[i].size();j++)
       {
           cout<<adj[i][j]<<" ";
       }
       cout<<endl;
   }*/



   int frr[n+5];
   for(int i=0;i<n;i++)frr[i]=0;

   for(int i=1;i<=k;i++)
   {
       for(int j=0;j<adj[i].size();j++)
       {
           int v=adj[i][j];
           for(int a=0;a<n;a++)
           {
               if(arr[a]==v&&frr[a]==0)
               {
                   frr[a]=i;
                   break;
               }
           }
       }
   }


   cout<<"YES"<<endl;
   for(int i=0;i<n;i++)cout<<frr[i]<<" ";cout<<endl;

}

int main()
{
    solve();
}

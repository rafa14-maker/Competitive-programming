#include<bits/stdc++.h>
using namespace std;

vector<int>adj[100005];
vector<int>v;
int frr[100005];
int vis[100005];

int counter=0;

void edge(int a,int b,int c)
{
    frr[a]++;
     frr[b]++;
      frr[c]++;
      adj[a].push_back(b);
      adj[a].push_back(c);
      adj[b].push_back(a);
      adj[b].push_back(c);
      adj[c].push_back(a);
      adj[c].push_back(b);
}


int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-2;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        edge(a,b,c);
    }

   for(int i=0;i<=n;i++)
   {
       if(frr[i]==1)
       {
           v.push_back(i);
           vis[i]=1;
           break;
       }
   }
   int k1=v[0];

   for(int i=0;i<adj[k1].size();i++)
   {
       if(frr[adj[k1][i]]==2)
       {
           v.push_back(adj[k1][i]);
           vis[adj[k1][i]]=1;
       }
   }
   while(1)
   {
       int flag=0;
       int s=v.size()-1;
       int k=v[s];
       int p=v[s-1];
      // cout<<adj[p].size()<<" "<<adj[k].size()<<endl;
       for(int i=0;i<adj[k].size();i++)
       {
         //  cout<<1<<endl;
           if(flag>0)break;
           for(int j=0;j<adj[p].size();j++)
           {
            //   cout<<2;
               if(adj[k][i]==adj[p][j]&&vis[adj[k][i]]==0)
               {
                   v.push_back(adj[k][i]);
                   flag++;
                   vis[adj[k][i]]=1;
                   break;
               }
           }
       }
       if(flag==0)break;
   }

  for(int i=0;i<v.size();i++)cout<<v[i]<<" ";

}

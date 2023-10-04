#include<bits/stdc++.h>
using namespace std;

using ll=long long ;

int n,k;

void solve()
{
 int n,k;
 cin>>n>>k;
 int frr[k+5];
 for(int i=1;i<=k;i++)frr[i]=0;
 int l;
 cin>>l;
 for(int i=0;i<l;i++)
 {
     int a;
     cin>>a;
     frr[a]=1;
 }
 int cnt=-1;

 vector<int>adj[n+5];

 for(int i=0;i<n;i++)
 {
     int a;
     cin>>a;
     for(int j=0;j<a;j++)
     {
        int p;
        cin>>p;
        adj[i].push_back(p);
     }
 }

 for(int i=0;i<n;i++)
 {
     for(int j=0;j<adj[i].size();j++)
     {
         int ak=adj[i][j];
         if(frr[ak]==1)frr[ak]=0;
         else frr[ak]=1;
     }
     bool tr=true;
     for(int i=1;i<=k;i++)if(frr[i])tr=false;
     if(tr&&cnt==-1)cnt=i+1;
 }

  for(int i=0;i<n;i++)
 {
     for(int j=0;j<adj[i].size();j++)
     {
         int ak=adj[i][j];
         if(frr[ak]==1)frr[ak]=0;
         else frr[ak]=1;
     }
     bool tr=true;
     for(int i=1;i<=k;i++)if(frr[i])tr=false;
     if(tr&&cnt==-1)cnt=i+1+n;
 }


 cout<<cnt<<endl;
}

int main()
{
 //   int q;scanf("%d",&q);while(q--)solve();
   solve();
}





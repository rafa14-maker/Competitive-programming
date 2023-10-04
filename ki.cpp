#include<bits/stdc++.h>
using namespace std;

const int N =2*1e5+5;

vector<int>adj[N];

int arr[N];

void edge(int a,int b)
{
    adj[a].push_back(b);
}

int main()
{
   int n,q;
   cin>>n>>q;
   int c=n-1;
   while(c--)
   {
       int a,b;
       cin>>a>>b;
       edge(a,b);
   }
   while(q--)
   {
     int a,b;
     cin>>a>>b;
     arr[a]+=b;
   }

   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<adj[i].size();j++)
       {
           arr[adj[i][j]]+=arr[i];
       }
   }
   for(int i=1;i<=n;i++)
   {
       cout<<arr[i]<<" ";
   }
}

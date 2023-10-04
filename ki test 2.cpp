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
    // arr2[b]=a;
   }

  // int p=-1;
  //cout<<q<<endl;
  /* queue<int>qr;
   qr.push(p);

   while(!qr.empty())
   {
       int f=qr.front();
       cout<<f<<" ";
       qr.pop();
       for(int i=0;i<adj[f].size();i++)
       {
           int m=adj[f][i];
           qr.push(m);
           arr[m]+=arr[f];
       }
   }
  cout<<endl;
   for(int i=1;i<=n;i++)cout<<arr[i]<<" ";*/

}



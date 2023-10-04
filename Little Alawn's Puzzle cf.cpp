#include<bits/stdc++.h>
using namespace std;

int mod = 1e9+7;


void solve()
{
   // cout<<"404"<<endl;

   int n;
   cin>>n;
   int arr[n+5][3];
   int frr[n+5][3];

   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       frr[i][0]=a;
       arr[a][0]=i;
   }

   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       frr[i][1]=a;
       arr[a][1]=i;
   }

   int cnt=0;

   for(int i=0;i<n;i++)
   {
       if(frr[i][0]!=-1)
       {
           cnt++;
           int k,p;
           k=i,p=0;
           while(frr[k][p]!=-1)
           {
               int m = frr[k][p];
               frr[k][p]=-1;
                  if(p==0)
                  {
                      p=1;
                  }
                  else
                  {
                      p=0;
                      k=arr[m][0];
                  }
           }
       }
   }

   long long mk = 1;

   for(int i=1;i<=cnt;i++)
   {
       mk*=2;
       mk=mk%mod;
   }
cout<<mk<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
 // solve();
}


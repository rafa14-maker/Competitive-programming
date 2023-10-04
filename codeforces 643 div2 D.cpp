#include<bits/stdc++.h>
using namespace std;

using ll = long long ;

void solve()
{
   int n,k;
   cin>>n>>k;
   if(n==1&&k==1)
   {
       cout<<"NO"<<endl;
       return;
   }
   map<int,int>mp;
   int p=k-n+1;
   for(int i=1;i<=n-1;i++)
   {
       mp[p+i]=1;
       mp[i]=1;
      // mp[p-i]=1;
   }
   bool tr=false;
   int kp=0;
   for(int i=n;i<=k;i++)
   {
       if(mp[i]==0&&mp[k-i]==0)
       {
           tr=true;
           kp=i;
           break;
       }
   }
   if(tr)
   {
       cout<<"YES"<<endl;
       for(int i=1;i<=n;i++)
       {
           if(i==n)cout<<p<<endl;
           else cout<<1<<" ";
       }
       cout<<kp<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }
}

int main()
{
   /* int q;
    cin>>q;
    while(q--)
    {
        solve();
    }*/
   solve();
}



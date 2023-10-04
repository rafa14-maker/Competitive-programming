#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int n,m,k;
   cin>>n>>m>>k;
   int p=n/k;
   int arr[n+5]={0};
   if(m>p)
   {
       arr[0]=p;
       m-=p;
   }
   else
   {
       cout<<m<<endl;
       return ;
   }
   int idx=1;
   int mx=0;
   while(m--)
   {
       arr[idx]++;
       mx=max(arr[idx],mx);
       idx++;
       if(idx==k)idx=1;
   }
   p-=mx;

   if(p<=0)cout<<0<<endl;
   else cout<<p<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,t,m;
   cin>>n>>t>>m;
   int arr[m+5];
   for(int i=0;i<m;i++)cin>>arr[i];
   int tot=0,act;
   t*=2;
   for(int i=(m+n-1)%n;i<m;i+=n)
   {
       if(tot<arr[i])act=arr[i];
       else act=tot;
       tot=act+t;
   }
   printf("%d %d\n",tot-t/2,(m+n-1)/n);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

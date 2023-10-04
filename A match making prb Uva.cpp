#include<bits/stdc++.h>
using namespace std;
int n,k;
int test;

void solve()
{
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[k+5];
    for(int i=0;i<k;i++)cin>>frr[i];

    if(n<=k)printf("Case %d: 0\n",++test);
     else
    {
        int mn=1e9;
       for(int i=0;i<k;i++)
       {
        mn=min(arr[i],mn);
       }
      printf("Case %d: %d %d\n",++test,n-k,mn);
    }
}

int main()
{
   while(1)
   {
       cin>>n>>k;
       if(n==0&&k==0)break;
       solve();
   }
}

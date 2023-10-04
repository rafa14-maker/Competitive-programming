#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int q;
    cin>>q;
    int c=0;
    while(q--)
    {
        int n;
        cin>>n;


       if(n==0)
       {
             printf("Case %d: 0\n", c++);
             continue;
       }

        ll arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
      //  if(n>2)arr[2]+=arr[0];
        for(int i=2;i<n;i++)arr[i]=max(arr[i-1],arr[i]+arr[i-2]);
       printf("Case %d: %lld\n",++c,arr[n-1]);
    }
}

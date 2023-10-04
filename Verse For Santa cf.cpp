#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e5+5;

ll arr[N];
ll frr[N];

void solve()
{
    int n;
    long long k;
    cin>>n>>k;
    //ll arr[n+5];
    //ll frr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i],frr[i]=arr[i];
    for(int i=1;i<=n;i++)arr[i]+=arr[i-1];

    ll idx = -1,mx = 0;

    for(int i=1;i<=n;i++)
    {
       int presum = arr[i-1];
       if(presum>k)break;
     //  cout<<presum<<endl;
       int ans = 0;

   /*    for(int j=i+1;j<=n;j++)
       {
           presum+=frr[j];
           if(presum<=k)
           {
               ans++;
           }
           else break;
       } */

       int l = i+1, r=n;

       while(l<=r)
       {
           int mid = (l+r)/2;
           if(presum+arr[mid]-arr[i]<=k)
           {
               ans = max(ans, i-1+mid-i);
               l = mid+1;
           }
           else r= mid-1;
       }
       if(mx<ans)
       {
           mx = ans;
           idx = i;
       }
    }

    for(int i=1;i<=n;i++)
    {
        if(arr[i]<=k)
        {
            if(mx<i)
            {
                mx = i;
                idx = 0;
            }
        }
    }

    cout<<idx<<endl;
   // cout<<mx<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

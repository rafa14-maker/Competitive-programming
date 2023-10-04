#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

using ll =long long ;

ll n,x,pos;

int f()
{
    ll arr[n+5];
    for(int i=0;i<n;i++)arr[i]=i+1;
    int l=0,r=n;
    int idx=1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(arr[mid]<=pos)
        {
            l=mid+1;
        }
        else r=mid;
        idx++;
    }
    return idx;
}

void solve()
{
   cin>>n>>x>>pos;
   pos++;
   ll sum=1;
   int kp=f();

   for(int i=1;i<=n;i++)
   {
      // cout<<sum<<endl;
       sum=(sum*(i))%mod;
       sum=sum%mod;
   }
   ll sumk=1;
    for(int i=1;i<=kp+2;i++)
   {
      // cout<<sum<<endl;
       sumk=(sumk*(i))%mod;
       sumk=sumk%mod;
   }
   cout<<f()<<endl;
   cout<<sumk<<endl;
   cout<<kp<<endl;
   int ikm=pow(10,kp-1);
 //  cout<<ikm<<endl;
   cout<<sum<<" "<<(sum-sumk)%mod<<endl;

}

int main()
{
    //int q;cin>>q;while(q--)solve();
    solve();
}

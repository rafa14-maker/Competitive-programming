#include<bits/stdc++.h>
using namespace std;

void solve()
{
   long long n;
   long long mod=1e9+7;
   cin>>n;
   long long sum=1,sum1=1;
   for(int i=1;i<=n;i++)
   {
      sum*=i;
      sum%=mod;
      if(i!=n)
      {
        sum1*=2;
        sum1%=mod;
      }
   }
//  sum=2+(n-2)*2;
 sum=(sum-sum1);
 sum%=mod;
 sum+=mod;
 sum%=mod;
 //sum=sum%mod;
   cout<<sum<<endl;
}

int main()
{
   // int q;cin>>q;while(q--)solve();
    solve();
}

#include<bits/stdc++.h>
using namespace std;

const long long mod=1e9+7;


void solve()
{
   string s;
   cin>>s;
   int n=s.size();
   int arr[n+5];
   for(int i=0;i<s.size();i++)
   {
       int k=(int)(s[i]-'0');
       arr[i]=k;
   }

   long long sum=0;

     for (int i=0; i<n; i++)
     {
         long long idx=(arr[i]%mod);
         idx*=(i+1);
         idx%=mod;
         idx*=(n-i);
         idx%=mod;
         sum+=idx;
         sum%=mod;
     }
        cout<<sum<<endl;

}

int main()
{
    solve();
    //int q;
    //cin>>q;
    //while(q--)solve();
}

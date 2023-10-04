#include<bits/stdc++.h>
using namespace std;


void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   int a=0,b=0,c=0,d=0;
   for(int i=1;i<=n;i++)
   {
       cin>>arr[i];
       if(arr[i]==1)a=i,b=i;
       if(arr[i]==n)c=i,d=i;
   }

   b=n-a+1;
   d=n-c+1;
  // a+=1;
  // b+=1;

  // cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

   int ans= 1e8+7;

   ans=min(ans,max(a,c));
   ans=min(ans,max(b,d));
   ans=min(ans,a+d);
   ans=min(ans,b+c);

   cout<<ans<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
 // solve();
}

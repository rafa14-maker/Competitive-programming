#include<bits/stdc++.h>
using namespace std;


void solve()
{
   // cout<<"404"<<endl;
   int n;
   cin>>n;
   int sum=0;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       sum+=a;
   }
   if(sum>n)cout<<sum-n<<endl;
   else if(sum==n)cout<<0<<endl;
   else cout<<1<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //solve();
}


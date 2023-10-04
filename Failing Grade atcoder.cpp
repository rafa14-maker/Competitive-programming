#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n,p;
   cin>>n>>p;
   int cnt = 0;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       if(a<p)cnt++;
   }
   cout<<cnt<<endl;
}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}


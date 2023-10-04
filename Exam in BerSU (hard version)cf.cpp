#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int n,m;
   cin>>n>>m;
   map<int,int>mp;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       int rem=m-a,pass=0;
       for(int j=1;j<=100;j++)
       {
           int delta = min(rem/j,mp[j]);
           rem -= delta*j;
           pass+=delta;
       }
       cout<<i-pass<<" ";
       mp[a]++;
   }
   cout<<endl;
}

int main()
{
    solve();
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   ll n,k;
   cin>>n>>k;
   vector<ll>v;
   for(ll i=1;i<=sqrt(n);i++)
   {
       if(n%i==0){
       v.push_back(i);
       if(i != n/i)
       {
           v.push_back(n/i);
       }
       }
   }
 //  cout<<v.size()<<endl;
  // for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
   sort(v.begin(),v.end());
   if(k>v.size())cout<<"-1"<<endl;
   else cout<<v[k-1]<<endl;
}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}


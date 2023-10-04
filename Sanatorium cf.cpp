#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   vector<ll>v;

   for(int i=0;i<3;i++)
   {
       ll a;
       cin>>a;
       v.push_back(a);
   }

   sort(v.begin(),v.end());

   if(v[0] == v[1] && v[1] == v[2])
   {
       cout<< 0 << endl;
   }
   else if(v[2] == v[1])
   {
       ll k = v[1] - v[0] -1;
       if(k<0) k = 0;
       cout << k << endl;
   }
   else
   {
       ll k = v[2] - v[1] -1;
       k += v[2] - v[0] - 1;
       if(k<0)k = 0 ;
       cout << k << endl;
   }

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}



#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   vector<pair<int,int> >v;
   for(int i=0;i<n;i++)
   {
       int a,b;
       cin>>a>>b;
       int c = abs(a-b);
       int d = a+b;
       v.push_back(make_pair(a,b));
   }


}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}


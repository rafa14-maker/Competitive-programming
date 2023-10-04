#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   set<int>s;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       s.insert(a);
   }
   if(s.size()>1)cout<<1<<endl;
   else cout<<n<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
  //  solve();
}

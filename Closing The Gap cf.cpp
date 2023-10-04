#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;
   ll sum = 0;
   for(int i=0;i<n;i++)
   {
       int a;
       cin>>a;
       sum+=a;
   }
   if(sum%n==0)cout <<0<<endl;
   else cout << 1 << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll n;
   cin>>n;
   if(n%2==0)
   {
       ll k = n/2;
       cout<< k<<" "<<k-1<<" "<<1<<endl;
       return ;
   }
   else
   {
     ll a = n-1;
     if((a/2)%2==0)cout<< a/2+1<<" "<<a/2-1<<" "<<1<<endl;
     else
     {
         cout<<a/2 +2<<" "<<a/2 -2<<" "<<1<<endl;
     }
   }
    // cout<<"yes"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


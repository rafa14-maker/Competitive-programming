#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

ll n,k;

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>k;

   cout<<min(min(n,k),(n+k)/4)<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


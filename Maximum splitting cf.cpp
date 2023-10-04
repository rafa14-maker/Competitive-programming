#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   ll n;
   cin>>n;

   if(n%4==0)cout<<n/4<<endl;
   else if(n==6||n==9)cout<<1<<endl;
   else if(n>=8)
   {
       ll k = n/4;
        if(n%4==1&&k>=3)cout<< k-1<<endl;
       else if(n%4==2&&k>=2)cout<<k<<endl;
       else if(n%4==3&&k>=3)cout<<k-1<<endl;
       else cout<< -1<<endl;
   }
   else cout<<-1<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


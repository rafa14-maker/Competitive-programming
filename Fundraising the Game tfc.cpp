#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   ll k;
   cin>>n>>k;

   ll sum =0 ;
   for(int i=0;i<n;i++)
   {
       ll a;
       cin>>a;
       sum += a;
   }

   if(sum==k)cout<<"Just enough"<<endl;
    else if(sum>k)cout<<"Success"<<endl;
    else if(sum<k)cout<<"More funding required"<<endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
   //int q;cin>>q;while(q--)solve();
   solve();
}


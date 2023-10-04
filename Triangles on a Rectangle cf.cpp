#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   ll w,h;
   cin>>w>>h;
   int k;
   cin>>k;
   ll onemx = 0,onemn = 1e8+7;
   for(int i=0;i<k;i++)
   {
     ll a;
     cin>>a;
     onemx = max(onemx,a);
     onemn = min(onemn,a);
   }

    cin>>k;
   ll twomx = 0,twomn = 1e8+7;
   for(int i=0;i<k;i++)
   {
     ll a;
     cin>>a;
     twomx = max(twomx,a);
     twomn = min(twomn,a);
   }

     cin>>k;
   ll threemx = 0,threemn = 1e8+7;
   for(int i=0;i<k;i++)
   {
     ll a;
     cin>>a;
     threemx = max(threemx,a);
     threemn = min(threemn,a);
   }

     cin>>k;
   ll fourmx = 0,fourmn = 1e8+7;
   for(int i=0;i<k;i++)
   {
     ll a;
     cin>>a;
     fourmx = max(fourmx,a);
     fourmn = min(fourmn,a);
   }

   ll sum = 0;

   ll onelen = abs(onemx - onemn);

   sum = max(sum,onelen*fourmx);
   sum = max(sum,onelen*h);
   sum = max(sum,onelen*threemx);

    ll twolen = abs(twomx - twomn);

   sum = max(sum,twolen*threemx);
   sum = max(sum,twolen*h);
   sum = max(sum,twolen*fourmx);

    ll threelen = abs(threemx - threemn);

   sum = max(sum,threelen*w);
   sum = max(sum,threelen*twomx);
   sum = max(sum,threelen*onemx);

    ll fourlen = abs(fourmx - fourmn);

   sum = max(sum,fourlen*w);
   sum = max(sum,fourlen*twomx);
   sum = max(sum,fourlen*onemx);

   cout << sum << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


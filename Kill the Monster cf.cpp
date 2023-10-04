#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool cal(ll hc,ll dc,ll hm,ll dm)
{
   ll   player = hm/dc;
  if(hm%dc!=0)player++;

   ll  monster = hc/dm;
  if(hc%dm!=0)monster++;

//cout<<player <<" "<<monster<<endl;

   if(player<=monster)return true;
   else return false;
}

void solve()
{
   // cout<<"yes"<<endl;

   ll dc,hc,dm,hm;
   cin>>hc>>dc>>hm>>dm;

   ll k,w,a;
   cin>>k>>w>>a;

  for(int i=0;i<=k;i++)
  {
      int ak = i;
      int bk = k-ak;

      if(cal(hc+ak*a,dc+bk*w,hm,dm))
      {
          cout<<"YES"<<endl;
          return ;
      }

  }
cout<<"NO"<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

/*

4
9 2
69 2
4 2 7

*/


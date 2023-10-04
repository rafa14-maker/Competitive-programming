#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
  int n;
  cin>>n;
  int sum = 0 ;

  int l1=1e9,l2=1e9,r1=0,r2=0,c1=0,c2=0;

  for(int i=0;i<n;i++)
  {
      int l,r,c;
      cin>>l>>r>>c;
      int cnt = 0;
      if(l<=l1)
      {
          if(c>c1){
          sum -= c1;
          l1 = l;
          l2 = r;
          sum +=c;
          c1 = c;
          cnt++;
          }
      }
     else if(r2<=r)
      {
          if(c<c2){
           sum -= c2;
          r1 = l;
          r2 = r;
        if(cnt!=1)  sum +=c;
          c2 = c;
          }
      }

      cout <<sum<<endl;
  }

}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n,m,k;
   cin>>n>>m>>k;
   //map<int,int>mp;

  int cnt = 0 ;
  for(int i=0;i<=n;i++)
  {
      int pk = k - i;
      if(pk<0)break;
      if(pk%2==0&&pk/2<=m)cnt++;
  }

  cout << cnt << endl;

}

int main()
{
    CherryFrog;
    //cout <<"All in!"<<endl;
  // int q;cin>>q;while(q--)solve();
   solve();
}


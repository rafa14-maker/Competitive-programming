#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;

  int ans = 0;

  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;

      ans += (1+(x==0))*(i+1)*(n-i);
  }

    cout << ans << endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


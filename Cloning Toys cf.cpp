#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

  ll A,B;
	cin>>A>>B;
	B--;
	if(B<=0&&A!=0)cout<<"NO"<<endl;
	else if((A-B)%2==0&&(A-B)>=0)cout<<"yes"<<endl;
	else cout<<"NO"<<endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}


#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    int c=abs(a-b);
    if(c%10==0)cout<<c/10<<endl;
    else cout<< c/10 +1<<endl;
}

int main()
{
  int q;cin>>q;while(q--)solve();
  //  solve();
}


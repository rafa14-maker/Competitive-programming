#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c||b==d)
    {
        cout<<abs(a-c)+abs(b-d)<<endl;
    }
    else
    {
          cout<<abs(a-c)+abs(b-d)+2<<endl;
    }
}

int main()
{
   int q;cin>>q;while(q--)solve();
   // solve();
}


#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve()
{
    int n;
    cin>>n;
    if(n<31)cout<<"NO"<<endl;
    else
    {
        int k=n-10-14-6;
        cout<<"YES"<<endl;
       if(k!=10&&k!=14&&k!=6) cout<<10<<" "<<14<<" "<<6<<" "<<k<<endl;
       else  cout<<10<<" "<<15<<" "<<6<<" "<<n-10-15-6<<endl;
    }
}

int main()
{
   int q;cin>>q;while(q--)solve();

   // solve();
}

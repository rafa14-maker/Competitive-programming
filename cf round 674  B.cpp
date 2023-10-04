#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   int m=2*n;
   bool tr=false;
    for(int i=0;i<n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==d&&b==c)tr=true;
    }
   if(k%2==1)cout<<"NO"<<endl;
   else if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
    //solve();
}


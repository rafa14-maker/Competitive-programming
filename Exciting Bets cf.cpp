#include<bits/stdc++.h>
using namespace std;

void solve()
{
  //  cout<<"fahim"<<endl;

long long a,b;
cin>>a>>b;

long long k = abs(a-b);

if(a==0||b==0)
{
    cout<<max(a,b)<<" "<<0<<endl;
    return ;
}

if(k==0)
{
    cout<<0<<" "<<0<<endl;
    return ;
}
else if(k==1)
{
    cout<<1<<" "<<0<<endl;
    return ;
}



long long p = k-(a%k);
cout<<k<<" "<<min(p,k-p)<<endl;

}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


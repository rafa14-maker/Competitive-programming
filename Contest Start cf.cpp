#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,x,t;
    cin>>n>>x>>t;

    long long k = min(n-1,t/x);
    long long m = n-k;
  //  if(m<0)m=0;

    long long km = max(0LL,(n-k)*(k));
    long long val = max(0LL,((k-1)*(k))/2);
  //  val/=2;
    cout<<km+val<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

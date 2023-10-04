#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    long long nk,pk;
    cin>>nk;
    pk=nk;

    if(nk==1||nk==0)
    {
        cout<<nk<<endl;
        return ;
    }
   ll sum=1;
   vector<ll>v;
  // sort(v.begin(),v.end());
    for(ll i=9;i>=2;i--)
    {
        while(nk%i==0)
        {
            nk/=i;
            sum*=i;
            v.push_back(i);
        }
    }

    if(nk>1&&nk<=9)
    {
        v.push_back(nk);
        sum*=nk;
    }
   // cout<<sum<<endl;
   sort(v.begin(),v.end());
    if(sum==pk)
    {
        for(int i=0;i<v.size();i++)cout<<v[i];
    }
    else cout<<"-1";

    cout<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    int n;
    ll k;

    cin>>n>>k;

    ll pk = k / 2 + (k%2);

    vector<pair<ll,ll> >v;

    for(int i=1;i<=n;i++)
    {
        ll a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }

    sort(v.begin(),v.end());

    ll sum = 0;

    vector<int>idx;

    for(int i=v.size()-1;i>=0;i--)
    {
      if(sum+v[i].first<=k)
      {
          sum+=v[i].first;
          idx.push_back(v[i].second);
      }
      if(sum >= (k+1)/2)break;
    }

  //  cout<<sum<<endl;

    if(sum < (k+1)/2)cout<<-1<<endl;
    else
    {
        cout<<idx.size()<<endl;
        for(int i=0;i<idx.size();i++)cout<<idx[i]<<" ";cout<<endl;
    }

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

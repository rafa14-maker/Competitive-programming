#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
    int n;
    cin>>n;

    vector<ll>v;
    vector<ll>frr;

    for(int i=0;i<n;i++)
    {
        v.push_back(i+1);
        v.push_back(i+n);
          frr.push_back(i+1);
        frr.push_back(i+n);
    }

    for(int i=1;i<frr.size();i++)
    {
        frr[i] += frr[i-1];
    }

    bool tr = true;

    for(int i=n;i<frr.size();i++)
    {
        if(i+1<frr.size())
        {
            ll  a = frr[i];
            ll b = frr[i+1];
            if(a>0)
        }
    }



}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}


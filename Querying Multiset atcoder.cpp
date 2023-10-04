#include<bits/stdc++.h>
using namespace std;
using ll = long long ;

void solve()
{
   priority_queue<ll,vector<ll>,greater<ll> >pq;
    int q;
    cin>>q;
    ll cnt=0;
    while(q--)
    {
        int idx;
        cin>>idx;
        if(idx==2)
        {
            ll x;
            cin>>x;
            cnt+=x;
        }
        if(idx==1)
        {
            ll x;cin>>x;
            x-=cnt;
            pq.push(x);
        }
        if(idx==3)
        {
           ll k = pq.top();
           pq.pop();
           cout<<k+cnt<<endl;
        }
    }
}

int main()
{
    solve();
}

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

string s;
ll n,k;

ll f(int idx)
{
    ll sum = 0;
    ll rdx = 0;
    for(int i=idx;i>=0;i--)
    {
        int r = (int)s[i]-'0';
        int dx = (r+rdx)%10;
        if(dx>0)dx = 10-dx;
        sum+=dx;
       // cout<<10-dx<<" "<<rdx<<endl;
        rdx+=dx;
    }
    return sum;
}

void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>k;
    cin>>s;

  //  cout<<f(n-1)<<endl;
    ll mx = 0;
    ll l = 0,r=n-1;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(f(mid)<=k)
        {
            mx = max(mx,mid);
            l = mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
  if(f(mx)<=k) cout<<mx+1<<endl;
  else cout<<0<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


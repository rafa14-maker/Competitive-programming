#include<bits/stdc++.h>
using namespace std;
using ll = long long;

vector<pair<ll,ll> >v;
int n;

bool check(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.second<b.second)return true;
    if(a.second==b.second)
    {
        if(a.first<b.first)return true;
    }
    return false;
}

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(),check);

   // for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;

   ll idx = 0 ;
   ll ans = 0;

   int l = 0,r = v.size()-1;

   while(l<=r&&l<v.size()&&r>=0)
   {
     // cout<<ans<<" "<<idx<<endl;
       while(l<=r&&idx>=v[l].second)
       {
           ans += v[l].first;
           idx += v[l].first;
           l++;
       }
    //   cout<<idx<<endl;
       if(l>r)break;
         ll k = abs(v[l].second - idx);
         if(k<=v[r].first)
         {
             ans += 2*k;
             v[r].first -= k;
             idx += k;
             if(v[r].first==0)r--;
         }else {
         while(r>=l&&k>=v[r].first)
         {
             ans += 2*v[r].first;
             idx += v[r].first;
             k -= v[r].first;
             r--;
         }
       //  if(k<=0)l++;
         }
         if(r<l)break;
         // cout<<l<<" "<<r<<" "<<ans<<" "<<idx<<" "<<k<<endl;
   }
  cout<<ans<<endl;

}

int main()
{
    solve();
}

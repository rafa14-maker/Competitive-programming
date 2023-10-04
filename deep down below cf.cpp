#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(vector<ll>v)
{
    ll l = 0, r = 1e17;
    ll ans = 1e17+7;
    while(l<=r)
    {
        ll mid = (l+r)/2;

        bool tr = true;

        ll k = mid;

        for(int i=0;i<v.size();i++)
        {
            if(v[i]>=k)tr=false;
            else k++;
        }

        if(tr)
        {
            ans = min(ans,mid);
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans ;
}

ll fk(vector<pair<ll,ll> >v)
{
    ll l = 0, r = 1e17+7;
    ll ans = 1e17+7;
    while(l<=r)
    {
        ll mid = (l+r)/2;

        bool tr = true;

        ll k = mid;

        for(int i=0;i<v.size();i++)
        {
            ll a = v[i].first;
            ll b = v[i].second;
            if(a>k)tr=false;
            else k+=b;
        }

        if(tr)
        {
            ans = min(ans,mid);
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans ;
}


void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   vector<pair<ll,ll> >v;

   for(int i=0;i<n;i++)
   {
       vector<ll>arr;
       int j;
       cin>>j;
       for(int k=0;k<j;k++)
       {
           ll a;
           cin>>a;
           arr.push_back(a);
       }

     //  sort(arr.begin(),arr.end());

       ll pk = f(arr);

       v.push_back(make_pair(pk,j));

     //  cout<<pk<<endl;
   }

      sort(v.begin(),v.end());

   ll sum = fk(v);

   cout << sum << endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

/*

1
4
4 9 12 14 15
3 1 7 15
4 2 4 6 8
4 10 12 18 21



1
2
3 10 15 8
2 12 11

*/




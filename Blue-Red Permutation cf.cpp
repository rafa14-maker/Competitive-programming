#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(pair<int,int>a,pair<int,int>b)
{
    if(a.second < b.second)return true;
    else if(a.second == b.second&&a.first>=b.first)
    {
       return true;
    }
    return false;
}

void solve()
{
   // cout<<"yes"<<endl;

   ll n;
   cin>>n;

   ll arr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }

   string s;
   cin>>s;

   vector<pair<ll,char> >v;

   for(int i=0;i<n;i++)
   {
       v.push_back(make_pair(arr[i],s[i]));

   }

   sort(v.begin(),v.end());

   bool tr=false;

   vector<pair<ll,ll> >idx;

   for(int i=0;i<n;i++)
   {
       ll a = v[i].first;
       ll b = v[i].first;
       if(v[i].second=='B')
       {
           if(a>=1)
           {
               a = (ll)1;
               b = min(n,v[i].first);
               idx.push_back(make_pair(a,b));
           }

       }
       else
       {
              if(a<=n)
           {
               a = v[i].first;
               b = max(v[i].first,n);
               idx.push_back(make_pair(a,b));
           }
       }
   }

   sort(idx.begin(),idx.end(),check);

  // for(int i=0;i<idx.size();i++)cout<<idx[i].first<<" "<<idx[i].second<<endl;

    tr = true;

   int dx = 1;

   for(int i=0;i<idx.size();i++)
   {
       if(idx[i].first<=dx&dx<=idx[i].second)
       {
           dx++;
       }
       else
       {
           tr=false;
           break;
       }
   }
   //cout<<dx<<endl;
   if(dx-1==n&&tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

}

int main()
{
   int q;cin>>q;while(q--)solve();
  // solve();
}

/*

1
2
1 -2
BR

*/


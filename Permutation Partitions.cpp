#include<bits/stdc++.h>
using namespace std;

long long mod = 998244353;

int main()
{
    int n,k;
    cin>>n>>k;
   int r = n/k;
if(n%k!=0)r++;
   vector<pair<int,int> >v;

   for(int i=1;i<=n;i++)
   {
       int a;
       cin>>a;
       v.push_back(make_pair(a,i));
   }
    sort(v.begin(),v.end());

   reverse(v.begin(),v.end());

   long long sum=1,counter=0;

   vector<int>idx;
  // idx.push_back(v[0].second);

   for(int i=0;i<k;i++)
   {
      // sum+=abs(v[i].second-v[i-1].second);
       counter+=v[i].first;
       idx.push_back(v[i].second);

   }
  sort(idx.begin(),idx.end());



  for(int i=1;i<idx.size();i++)
  {
      sum = (sum*(idx[i]-idx[i-1]));
      sum=sum%mod;
  }

   cout<<counter<<" "<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n;
  ll k;
  cin>>n>>k;
   ll mn=1e10,mx=0;
  //map<int,int>mp;

  for(int i=0;i<n;i++)
  {
      ll a;
      cin>>a;
     mn=min(mn,a);
     mx=max(mx,a);
      mp[a]++;
  }


  int l=mn,r=mx;
  int left = mp[l],right = mp[r];

 // cout<<l<<" "<<r<<endl;
 //cout<<left<<" "<<right<<endl;

  while(l<r)
  {
      if(k<=0)break;
      if(left>k&&right>k)break;
      else if(left<=right)
      {
        l++;
        k-=left;
        left+=mp[l];
      //  k-=left;
      }
      else
      {
          r--;
          k-=right;
          right+=mp[r];
         // k-=right;
      }
  }
  cout<<r-l<<endl;
}

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int n;
    cin>>n;
    ll arr[n+5];
     map<ll,ll>mp;
     set<ll>s;


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
      mp[arr[i]]++;
    s.insert(arr[i]);
    }

  //  map<int,int>one;
  //  map<int,int>two;

   ll sum=0;

   for(set<ll>::iterator it=s.begin();it!=s.end();it++)
   {
       {
       ll a = mp[*it];
    //  cout<<a<<endl;
     a=a*(a-1);
     sum+=a;
     //  cout<<sum<<endl;
       }
   }
  for(int i=0;i<n;i++)
  {
      ll k=arr[i];
   //   cout<<mp[arr[i]]<<" ";


      {
          ll c = mp[k];
          c=c*(c-1);
          ll sumb=sum-c;
          ll a=mp[k]-1;
          cout<<(sumb+(a*(a-1)))/2<<endl;
      }
  }

}

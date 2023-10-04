#include<bits/stdc++.h>
using namespace std;

  vector<pair<long long,int> >v;

void build()
{
    v.push_back(make_pair(1,1));
    v.push_back(make_pair(3,2));
    v.push_back(make_pair(6,5));
     for(int i=3;i<=1e5+5;i++)
       {
      long long sum=1;
      for(int j=2;j<=sqrt(i);j++)
      {
          if(i%j==0)
          {
              sum+=j;
              if(i/j!=j)sum+=i/j;
          }
      }
      sum+=i;
     // cout<<sum<<" "<<i<<endl;
      v.push_back(make_pair(sum,i));
  }
  sort(v.begin(),v.end());
}

void solve()
{
 /// vector<long long>v;

 int n;
 cin>>n;
 int l=0,r=v.size()-1;
 int idx=-1;
 while(l<=r)
 {
     int mid=(l+r)/2;
     if(v[mid].first==n)
     {
         idx=v[mid].second;
         break;
     }
     else if(v[mid].first>n)r=mid-1;
     else l=mid+1;
 }
 cout<<idx<<endl;
}

int main()
{
    build();
    int q;
    cin>>q;
    while(q--)solve();

}


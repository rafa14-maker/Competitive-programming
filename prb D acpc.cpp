#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
   vector<pair<double,string> >v;
   vector<pair<double,string> >mp;
   double arr[n+5];
   vector<string>vs;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        cin>>arr[i];
       mp.push_back(make_pair(arr[i],s));
        double a;
        cin>>a;
        v.push_back(make_pair(a,s));
    }
    sort(v.begin(),v.end());
  double sum=1e9;

  for(int i=0;i<n;i++)
  {
      double pk=mp[i].first;
      vector<string>ck;
      ck.push_back(mp[i].second);
      int cnt=0;
      for(int j=0;j<v.size();j++)
      {
          if(v[j].second==mp[i].second)continue;
              cnt++;
              pk+=v[j].first;
              ck.push_back(v[j].second);
          if(ck.size()==4)break;
      }
      if(pk<sum)
      {
          sum=pk;
          vs=ck;
      }



  }
cout<<sum<<endl;
      for(int i=0;i<vs.size();i++)cout<<vs[i]<<endl;
}


int main()
{
    solve();
}

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    set<int>s;

    for(int i=0;i<n;i++)
    {
       s.insert(arr[i]);
    }

      if(s.size()>k)
      {
          cout<<-1<<endl;
          return ;
      }

      vector<int>v;
      vector<int>fr;

      for(auto it=s.begin();it!=s.end();it++)fr.push_back(*it);

      if(fr.size()<k)
      {

          for(int i=1;i<=100;i++)
          {
              bool cr=true;
             for(int j=0;j<fr.size();j++)
             {
                 if(fr[j]==i)cr=false;
             }
              if(cr)fr.push_back(i);
              if(fr.size()==k)break;
          }

      }

      for(int i=0;i<n;i++)
      {
        for(int j=0;j<fr.size();j++)v.push_back(fr[j]);
      }

      cout<<v.size()<<endl;
      for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
      cout<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
    }
}

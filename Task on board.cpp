#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<pair<char,int> >v;
    int n;
    cin>>n;
    int arr[n+5];
   map<int,char>mp;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
        v.push_back(make_pair(i,a));
    }
    int idx=s.size()-1;

    vector<int>pq;
    vector<int>ui;

        while(1)
          {
       for(int i=0;i<v.size();i++)
           {
           if(v[i].second==0&&v[i].first!=-1)
           {
               pq.push_back(v[i].first);
               mp[v[i].first]=s[idx];
              ui.push_back(v[i].first);
               idx--;
               v[i].first=-1;
           }
       }
       if(pq.size()==0)break;
       for(int i=0;i<v.size();i++)
       {
           if(v[i].first!=-1)
           {
               for(int j=0;j<pq.size();j++)
               {
                   v[i].second-=abs(v[i].first-pq[j]);
               }
           }
       }
       pq.clear();
    }
  sort(ui.begin(),ui.end());
   idx=0;
  for(int i=0;i<ui.size();i++)
  {
      mp[ui[i]]=s[idx];
      idx++;
  }
  for(int i=1;i<=n;i++)cout<<mp[i];cout<<endl;
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

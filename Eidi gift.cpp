#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        vector<pair<int,int> >v;
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        v.push_back(make_pair(a,d));
         v.push_back(make_pair(b,e));
          v.push_back(make_pair(c,f));
          sort(v.begin(),v.end());
          int flag=0;
          for(int i=0;i<v.size()-1;i++)
          {
              if(v[i].first==v[i+1].first&&v[i].second==v[i+1].second)flag++;
              else if(v[i].first<v[i+1].first&&v[i].second<v[i+1].second)flag++;
          }
          if(flag==2)cout<<"FAIR"<<endl;
          else cout<<"NOT FAIR"<<endl;
    }
}

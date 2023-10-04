#include<bits/stdc++.h>
using namespace std;

bool ok(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)return true;
    if(a.first==b.first&&a.second<b.second)return true;
    return false;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<int,int> >v;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    sort(v.begin(),v.end(),ok);

     bool tr=true;

     int ak=v[n/2].first;
     int bk=v[n/2].second;

     for(int i=0;i<n;i++)
     {
         int pk=abs(v[i].first-ak);
         pk+=abs(v[i].second-bk);
         if(pk>k)tr=false;
     }

     if(tr)cout<<1<<endl;
     else cout<<-1<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


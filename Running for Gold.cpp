#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,vector<int> >ak,pair<int,vector<int> >bk)
{
    int ap=0,bp=0;
    vector<int>a,b;
    a=ak.second;
    b=bk.second;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>b[i])ap++;
        else bp++;
        if(a[i]==b[i])ap++,bp++;
    }
    if(bp>=3)return true;
    return false;
}

void solve()
{
   vector<pair<int,vector<int> > >vp;
   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       vector<int>v;
       for(int j=0;j<5;j++)
       {
           int a;
           cin>>a;
           v.push_back(a);
       }
       vp.push_back(make_pair(i+1,v));
   }
   sort(vp.begin(),vp.end(),check);


   vector<int>v ;
   v = vp[0].second;

   bool tr=true;

   for(int i=0;i<n;i++)
   {
       vector<int>p = vp[i].second;
       int cnt=0;
       for(int j=0;j<5;j++)
       {
           if(p[j]>=v[j])cnt++;
       }
       if(cnt<3)tr=false;
   }
   //cout<<vp[0].first<<endl;
   if(tr)cout<<vp[0].first<<endl;
   else cout<<-1<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}


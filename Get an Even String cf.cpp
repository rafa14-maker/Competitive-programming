#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool cmp(pair<char,int>a,pair<char,int>b)
{
    if(a.first < b.first)return true;
    if(a.first == b.first && a.second < b.second)return true;
    return false;
}

bool cmp1(pair<int,pair<int,int> >a,pair<int,pair<int,int> >b)
{
    if(a.first < b.first)return true;
    if(a.first == b.first && a.second.first < b.second.first)return true;
    if(a.first == b.first && a.second.first == b.second.first &&a.second.second < b.second.second)return true;
    return false;
}
const int N = 2e5+5;
int frr[N];


void solve()
{
  //  cout<<"yes"<<endl;

  string s;
  cin>>s;
 int cnt = 0;
 vector<pair<char,int> >v;
 for(int i=0;i<s.size();i++)
 {
  v.push_back(make_pair(s[i],i));
 }
   sort(v.begin(),v.end(),cmp);
   vector<pair<int,pair<int,int> > >vb;
   for(int i=0;i<v.size();i++)
   {
       if(v[i].first == v[i+1].first)
       {
           int u = v[i].second;
           int vk = v[i].second;
           frr[u] = vk;
           frr[vk]=u;
           i+=2;
           vb.push_back(make_pair(abs(u-vk),make_pair(u,vk)));
       }
   }
   sort(vb.begin(),vb.end(),cmp1);

   vector<int>vs;
   for(int i=0;i<vb.size();i++)
   {
       int a = vb[i].second.first;
       int b = vb[i].second.second;
       int l  =min(a,b);
       int r = max(a,b);
      auto lk = lower_bound(vs.begin(),vs.end(),l);
       auto  rk = lower_bound(vs.begin(),vs.end(),r);
       if(lk==vs.begin()||lk==vs.end()){
       {
           if(rk==vs.begin()||rk==vs.end()){
           vs.push_back(l);
           vs.push_back(r);
           sort(vs.begin(),vs.end());
       }
       }
       }
   }

   cout<<s.size()-vs.size()<<endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 // solve();
}


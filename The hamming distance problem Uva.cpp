#include<bits/stdc++.h>
using namespace std;

vector<string>v;
int n,k;

void f(int pos,string s,int cnt)
{
    if(cnt>k)return;
    if(pos==n)
    {
      if(cnt==k)  v.push_back(s);
      return;
    }
    string frr=s;
    frr[pos]='1';
    f(pos+1,frr,cnt+1);
    f(pos+1,s,cnt);
}

void solve()
{
    v.clear();
    cin>>n>>k;
    string s;
    for(int i=0;i<n;i++)s+='0';
    f(0,s,0);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
        if(q)cout<<endl;
    }
}

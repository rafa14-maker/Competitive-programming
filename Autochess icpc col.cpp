#include<bits/stdc++.h>
using namespace std;

void solve()
{
    vector<pair<string,int> >v;
    map<string,int>mp;
     int m,n,k;
     cin>>m>>n>>k;
     for(int i=0;i<m;i++)
     {
         string s;
         cin>>s;
         v.push_back(make_pair(s,1));
     }
    vector<string>vs;


     for(int i=0;i<m;i++)
     {
         string s = v[i].first;
         int value = v[i].seccond;

     }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

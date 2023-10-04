#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,char>mp;
    int idx=0;
    for(char i='a';i<='z';i++)
    {
        mp[s[idx]]=i;
        idx++;
    }

    int n;
    cin>>n;
   vector<pair<string ,string > >v;

    for(int i=0;i<n;i++)
    {
      string st;
      cin>>st;
      string ts;
      for(int i=0;i<st.size();i++)ts+=mp[st[i]];
      v.push_back(make_pair(ts,st));
    }

    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].second<<endl;
    }


}

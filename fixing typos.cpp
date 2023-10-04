#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<pair<int,char> >v;
    int counter=1;
    for(int i=0;i<s.size();i++)
    {
        if(i+1<s.size()&&s[i]==s[i+1])
        {
            counter++;
        }
        else
        {
             v.push_back(make_pair(counter,s[i]));
            counter=1;
        }
    }
    if(counter>1)
    {
        int n=s.size()-1;
        v.push_back(make_pair(counter,s[n]));
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].first>=3)v[i].first=2;
    }
    for(int i=0;i<v.size();i++)
    {
        if(i+1<v.size()&&v[i].first==2&&v[i].first==v[i+1].first)
        {
            v[i+1].first=1;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].first;j++)cout<<v[i].second;
    }
    cout<<endl;
}

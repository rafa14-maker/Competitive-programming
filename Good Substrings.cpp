#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string str;
    cin>>str;
    int k;
    cin>>k;
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='0')
        {
            mp['a'+i]=0;
        }
        else
        {
            mp['a'+i]=1;
        }
    }
    set<string>v;
    for(int i=0;i<s.size();i++)
    {
        string krr="";
        for(int j=i;j<s.size();j++)
        {
            krr+=s[j];
            v.insert(krr);
        }
    }
    int counter=0;
    for(set<string>::iterator it=v.begin();it!=v.end();it++)
    {
        string tr=*it;
        int flag=0;
        for(int j=0;j<tr.size();j++)
        {
            if(mp[tr[j]]==0)flag++;
        }
        if(flag<=k)counter++;
    }
    cout<<counter<<"\n";
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>mp;
    set<string>s;
    int counter=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        mp[a]++;
        s.insert(a);
        counter=max(counter,mp[a]);
    }
    set<string>::iterator it;
    for(it = s.begin();it != s.end(); it++)
    {
        if(mp[*it]==counter)cout<<*it<<endl;
    }
}

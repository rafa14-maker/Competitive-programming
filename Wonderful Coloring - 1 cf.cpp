#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
    int one=0,two=0;
    for(char i='a';i<='z';i++)
    {
        if(mp[i]>=2)two++;
        else if(mp[i]==1)one++;
    }
    cout<<two + one/2<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

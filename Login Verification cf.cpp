#include<bits/stdc++.h>
using namespace std;

string trans(string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='O')s[i]='0';
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
        if(s[i]=='1')s[i]='l';
        if(s[i]=='i'||s[i]=='I')s[i]='l';
    }
    sort(s.begin(),s.end());
    return s;
}

void solve()
{
    string s;
    cin>>s;
    s = trans(s);
    bool tr=false;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string fk;
        cin>>fk;
        fk = trans(fk);
        if(fk==s)tr=true;
    }
    if(tr)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main()
{
    solve();
}

#include<bits/stdc++.h>
using namespace std;

void solve()
{
string s;
cin>>s;
    while(1)
    {
        string frr;
        bool tr=true;
        for(int i=0;i<s.size();)
        {
            if(i+1<s.size()&&s[i]=='A'&&s[i+1]=='B')
            {
                tr=false;
                i+=2;
            }
            else frr+=s[i],i++;
        }
        s=frr;
        if(tr)break;
    }

    while(1)
    {
        string frr;
        bool tr=true;
        for(int i=0;i<s.size();)
        {
            if(i+1<s.size()&&s[i]=='B'&&s[i+1]=='B')
            {
                tr=false;
                i+=2;
            }
            else frr+=s[i],i++;
        }
        s=frr;
        if(tr)break;
    }
    cout<<s.size()<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


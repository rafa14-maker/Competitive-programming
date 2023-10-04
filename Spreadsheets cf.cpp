#include<bits/stdc++.h>
using namespace std;

void one(string s)
{

}

void two(string s)
{
    string as,bs;
    bool tr=false;
    for(int i=s.size()-1;i>=0;i--)
    {

    }
}

void solve()
{
    bool a=false,b=false,c=false;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R')a=true;
        if(s[i]=='C')b=true;
    }
    if(a&&c)
    {
        one(s);
    }
    if(c&&b)two(s);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

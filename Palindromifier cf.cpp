#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int n=s.size();
    bool tr=true;
    for(int a=0,b=s.size()-1;a<b;a++,b--)
    {
        if(s[a]!=s[b])tr=false;
    }
    if(tr)cout<<0<<endl;
    else
    {
        cout<<3<<endl;
        cout<<"L"<<" "<<2<<endl;
        n+=1;
        cout<<"R"<<" "<<2<<endl;
        n+=(n-2);
        cout<<"R"<<" "<<n-1<<endl;
    }
}

int main()
{
    solve();
}

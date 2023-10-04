#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string frr;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='U')frr+='D';
       else  if(s[i]=='D')frr+='U';
       else frr+=s[i];
    }
    cout<<frr<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

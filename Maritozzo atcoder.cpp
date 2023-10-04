#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    string s;
    cin>>s;
    string frr;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')frr+=a;
        if(s[i]=='2')frr+=b;
        if(s[i]=='3')frr+=c;
    }
    cout<<frr<<endl;
}

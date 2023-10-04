#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    long long cnt=0;
    for(char a='1';a<='9';a++)
    {
        string frr;
        while(frr.size()<4)
        {
            frr+=a;
            if(frr.size()<=4)cnt+=frr.size();
            if(frr==s)break;
        }
        if(frr==s)break;
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


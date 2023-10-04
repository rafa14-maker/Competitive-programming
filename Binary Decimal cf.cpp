#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    char mx = '0';
    for(int i=0;i<s.size();i++)
    {
        mx=max(mx,s[i]);
    }

    cout<<mx<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}


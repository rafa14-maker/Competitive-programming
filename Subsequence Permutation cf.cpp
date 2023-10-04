#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string f = s;
    sort(f.begin(),f.end());
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=f[i])cnt++;
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

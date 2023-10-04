#include<bits/stdc++.h>
using namespace std;

int n,k;
string frr;
vector<string>v;

bool check(string s)
{
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=frr[i])cnt++;
    }
    if(cnt>k)return false;
    return true;
}

void f(string s)
{
    if(s.size()==n)
    {
        if(check(s))
        {
            v.push_back(s);
        }
        return ;
    }
    f(s+'A');
    f(s+'G');
    f(s+'C');
    f(s+'T');
}

void solve()
{
    cin>>n>>k;
    cin>>frr;
    v.clear();
    f("");
    sort(v.begin(),v.end());
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

#include<bits/stdc++.h>
using namespace std;

int n,l,r;
set<string>st;

bool check(string s)
{
    int one=0,two=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')one++;
        else if(s[i]=='1') two++;
    }
    if(one==l&&two==r)return true;
    return false;
}

void f(string s)
{
    if(s.size()==n)
    {
        if(check(s))st.insert(s);
        return;
    }
    f(s+'0');
    f(s+'1');
    f(s+'2');
}

void solve()
{
    cin>>n>>l>>r;
    st.clear();
    f("");
    cout<<st.size()<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

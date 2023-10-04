#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    bool pr = false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'&&pr)break;
       else if(s[i]>='b'&&s[i]<='z')
        {
            pr = true;
            s[i] -= 1;
        }
    }
    if(!pr)
    {
        s[s.size()-1]='z';
    }
    cout<<s<<endl;
}

int main()
{
    solve();
}

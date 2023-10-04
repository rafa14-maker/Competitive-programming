#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;

    bool tr=false;
    int cnt=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1'&&i+1<s.size()&&s[i+1]=='1')tr=true;
        else if(tr)
        {
            if(i+1<s.size()&&s[i]==s[i+1]&&s[i]=='0')cnt=1;
        }
    }
      if(cnt==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

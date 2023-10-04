#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
    string s;
    cin>>s;
    int cnt=0;
    bool a=false,b=false;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')b=true;
        if(s[i]=='0'){
                a=true;
           while(s[i]=='0')
           {
            i++;
           }
           i--;
        cnt++;
        }
    }

    if(a&&b)
    {
        cout<<min(2,cnt)<<endl;
    }
    else if(a)cout<<1<<endl;
    else cout<<0<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}


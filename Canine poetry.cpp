#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(i-1>=0&&s[i-1]==s[i])
        {
          s[i]='1';
          cnt++;
        }
        else if(i-2>=0&&s[i-2]==s[i]&&s[i-2]!='1')
        {
            s[i]='1';
            cnt++;
        }
    }

    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

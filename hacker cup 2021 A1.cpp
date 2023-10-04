#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char c = 'Z';
    int cnt=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='O'||s[i]=='X')
        {
            if(c=='Z')c=s[i];
            else
            {
                if(c!=s[i])
                {
                    cnt++;
                    c=s[i];
                }
            }
        }
    }

    printf("Case #%d: %d\n",++test,cnt);
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

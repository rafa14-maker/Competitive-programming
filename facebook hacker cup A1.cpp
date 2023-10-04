#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    string s;
    cin>>s;

    int sum=1e7+5;

    for(char c = 'A';c<='Z';c++)
    {
        int idx=0;
        int cnt=0;

        if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')cnt=1;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=c)
            {
                if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                {
                    if(cnt==0)idx+=1;
                    else idx+=2;
                }
                else
                {
                    if(cnt==0)idx+=2;
                    else idx+=1;
                }
            }
        }
        sum=min(sum,idx);
    }

    printf("Case #%d: %d\n",++test,sum);


}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

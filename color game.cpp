#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    int m;
    cin>>m;
    while(1)
    {
        bool tr=true;
        for(int i=0;i<s.size();i++)
        {
            int j;
            for( j=i+1;j<s.size();j++)
            {
                if(s[i]!=s[j])break;
            }
            j--;
            if(j-i+1>=m)
            {
                tr=false;
                for(int a=i;a<=j;a++)s[a]='0';
            }
            i=j;
        }
        if(tr)break;
        string frr;
        for(int i=0;i<s.size();i++)if(s[i]!='0')frr+=s[i];
    }
    if(frr.size()>0)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}

int main()
{
    solve();
}

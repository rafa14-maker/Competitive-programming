#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int idx = 0 ;

    for(int i=0;i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            bool tr=true;
            for(int k=0;k<s.size();k++)
            {
                if(i+k<s.size()&&j+k<s.size())
                {
                    if(s[i+k]!=s[j+k])tr=false;
                }
            }
            if(tr)
            {
                idx = j;
            }
        }
    }

    cout<<idx<<endl;

}

int main()
{
    solve();
}

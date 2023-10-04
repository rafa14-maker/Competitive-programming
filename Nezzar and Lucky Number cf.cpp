#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,d;
    cin>>n>>d;
    for(int i=0;i<n;i++)
    {
        bool tr=false;
        string s;
        cin>>s;
        for(int a=0;a<s.size();a++)
        {
             long long pk=0;
            for(int j=a;j<s.size();j++)
            {
                pk*=10;
                pk+=(long long)s[j]-'0';
                if(pk%d==0&&pk!=0)tr=true;
            }
        }
        if(tr)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

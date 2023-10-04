#include<bits/stdc++.h>
using namespace std;

int n,m,k;

void solve()
{
    string arr[n+5];
    int cha=0,line=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s.size()+cha<=k)
        {
            cha+=s.size()+1;
        }
        else
        {
            cha=s.size()+1;
            line++;
        }
    }
    line+=(cha!=0);
    if(line%m)cout<<line/m+1<<endl;
    else cout<<line/m<<endl;
}

int main()
{
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        solve();
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    int mx=0,mn=1e8;


    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        mx=max(a,mx);
        mn=min(b,mn);
    }
    if(mn<mx)cout<<0<<endl;
    else cout<<mn-mx+1<<endl;
}

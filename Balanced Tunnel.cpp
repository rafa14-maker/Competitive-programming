#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

int a[N],b[N],pos[N],r[N];

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        pos[a[i]]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        b[i]=pos[b[i]];
    }

    int mn=1e9+7,ans=0;

    for(int i=n;i>=0;i--)
    {
        mn=min(mn,b[i]);
        if(b[i]>mn)ans++;
    }

    cout<<ans<<endl;
}

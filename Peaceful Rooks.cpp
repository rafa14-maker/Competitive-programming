#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a!=b)
        {
            if(a<=m||b<=m)sum++;
            else sum+=abs(a-b);
        }
    }
    cout<<sum<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

void solve()
{
    map<int,int>mp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }
    for(int i=1;i<=2*n;i++)
    {
        if(mp[i]>1)
        {
            mp[i+1]++;
            mp[i]--;
        }
    }
    int cnt=0;
    for(int i=1;i<=2*n+5;i++)if(mp[i])cnt++;
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

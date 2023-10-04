#include<bits/stdc++.h>
using namespace std;

int n;
int test;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second>b.second;
}

void solve()
{
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end(),cmp);

    int ans=0,time=0;

    for(int i=0;i<n;i++)
    {
        time+=v[i].first;
        ans=max(ans,v[i].second+time);
    }

   printf("Case %d: %d\n",++test,ans);
}

int main()
{
    while(1)
    {
        cin>>n;
        if(n==0)break;
        solve();
    }
}

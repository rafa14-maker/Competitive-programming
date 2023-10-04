#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> >v(1001);

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)
    {
        return 1;
    }
    if(a.first>b.first)
    {
        return 0;
    }
    if(a.second>b.second)
    {
        return 1;
    }
    return 0;
}
void call()
{
    for(int i=1;i<=1000;i++)
    {
        v[i].first=0;
        v[i].second=i;
    }
    for(int i=1;i<=1000;i++)
    {
        for(int j=i;j<=1000;j+=i)
        {
            v[j].first++;
        }
    }
    sort(v.begin(),v.end(),cmp);
}

int main()
{
    call();
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>k;
        printf("Case %d: %d\n",i,v[k].second);
    }
}

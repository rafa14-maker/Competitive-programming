#include<bits/stdc++.h>
using namespace std;

int n;

const int N =1e5+5;
int arr[N];

bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first<b.first)return true;
    if(a.first==b.first&&a.second<b.second)return true;
    return false;
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

    memset(arr,0,sizeof arr);

    vector<int>adj[N];

    for(int i=0;i<v.size();i++)
    {
        int a=v[i].first,b=v[i].second;
        adj[a].push_back(b);
    }

    bool tr=true;

    for(int i=1;i<=1e5;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            bool kp=true;
            int a=adj[i][j];
            int k=arr[a];
            if(adj[a].size()>0&&adj[a][k]==i)
            {
                kp=false;
                arr[a]++;
            }
            if(kp)
            {
               // cout<<i<<endl;
                tr=false;
                break;
            }
        }
        if(!tr)break;
    }

    if(tr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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

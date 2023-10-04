#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    vector<int>adj[n+5];

    vector<pair<int,int> >v;

    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        v.push_back(make_pair(a,i));
    }

    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    sort(v.begin(),v.end());

    int sum=0;

    for(int i=0;i<v.size();i++)
    {
        int a=v[i].first,b=v[i].second;
        for(int j=0;j<adj[b].size();j++)
        {
            if(adj[b][j]!=0)
            {
                sum+=a;
                int p=adj[b][j];
                for(int g=0;g<adj[p].size();g++)
                {
                    if(adj[p][g]==b)
                    {
                        adj[p][g]=0;
                        break;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
}

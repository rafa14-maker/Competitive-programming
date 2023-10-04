#include<bits/stdc++.h>
using namespace std;

vector<int>adj[5000];
using ll = long long;

int main()
{
    int n,m;

    cin>>n>>m;

    ll arr[n+5];

    for(int i=1;i<=n;i++)cin>>arr[i];

    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)swap(a,b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    bool frr[n+5];

    memset(frr,false,sizeof frr);

    ll sum=1e12;

    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()==2&&frr[i]==false)
        {
            int flag=0;
            for(int j=0;j<adj[i].size();j++)
            {
                int p=adj[i][j];
                if(adj[p].size()==2&&frr[p]==false)
                {
                    flag++;
                }
            }
            if(flag==2)
            {
                int a=i;
                int b=adj[i][0];
                int c=adj[i][1];

                sort(adj[a].begin(),adj[a].end());
                 sort(adj[b].begin(),adj[b].end());
                  sort(adj[c].begin(),adj[c].end());

                  if(adj[a][0]==b&&adj[a][1]==c&&adj[b][0]==a&&adj[b][1]==c&adj[c][0]==a&&adj[c][1]==b){
                sum=min(sum,arr[a]+arr[b]+arr[c]);
                frr[a]=true;
                frr[b]=true;
                frr[c]=true;
                  }
            }
        }
    }
    if(sum==1e12) cout<<-1<<endl;
    else cout<<sum<<endl;
}

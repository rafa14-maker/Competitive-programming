#include<bits/stdc++.h>
using namespace std;

vector<int>adj[250];

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        for(int i=1;i<=200;i++)adj[i].clear();
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            adj[a].push_back(i);
        }
        int ans=0;
        for(int i=1;i<=200;i++)
        {
            if(adj[i].size())
            {
                ans=max(ans,(int)adj[i].size());
                int l=0,r=adj[i].size()-1;
                int tot=0;
                while(l<r)
                {
                    tot+=2;
                    int x=adj[i][l];
                    int y=adj[i][r];
                    for(int j=1;j<=200;j++)
                    {
                        if(i!=j&&adj[j].size())
                        {
                            int lx=upper_bound(adj[j].begin(),adj[j].end(),x)-adj[j].begin();
                            int ly=lower_bound(adj[j].begin(),adj[j].end(),y)-adj[j].begin();
                            int m=max(0,ly-lx);
                            ans=max(ans,m+tot);
                        }
                    }
                    l++;
                    r--;
                }
            }

        }
         cout<<ans<<endl;
    }
}

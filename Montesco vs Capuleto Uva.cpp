#include<bits/stdc++.h>
using namespace std;

typedef vector<int>vi;

bool has(vi v,int e)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==e)return true;
    }
    return false;
}

int main()
{
    int V,E,v,tc;
    vector<vi>adj;
    cin>>tc;
    while(tc--)
    {
        cin>>V;
        adj.assign(V,vi());
        for(int u=0;u<V;u++)
        {
            cin>>E;
            for(int j=0;j<E;j++)
            {
                cin>>v;
                v--;
                if(v<V)
                {
                    if(!has(adj[u],v))
                    {
                        adj[u].push_back(v);
                    }
                    if(!has(adj[v],u))
                    {
                        adj[v].push_back(u);
                    }
                }
            }
        }

       int color[250];
      for(int i=0;i<V;i++)color[i]=1e7;

        bool tr;
        int ans=0;
       // cout<<909<<endl;
       for(int s=0;s<V;s++)
        {
            if(color[s]!=1e7)continue;
           //cout<<909<<endl;
            tr=true;
            int cnt[2]={0,0};
            queue<int>q;
            q.push(s);
          //  cout<<909<<endl;
            color[s]=0;
            cnt[0]++;
        //   cout<<909<<endl;
            while(!q.empty())
            {
                int u=q.front();
                q.pop();
               // cout<<u<<endl;
                for(int j=0;j<adj[u].size();j++)
                {
                    int vk=adj[u][j];
                    if(color[vk]==1e7)
                    {
                        color[vk]=1-color[u];
                        cnt[color[vk]]++;
                        q.push(vk);
                    }
                    else if(color[vk]==color[u])
                    {
                        tr=false;
                    }
                }
            }
            if(tr)ans+=max(cnt[0],cnt[1]);
        }
       // cout<<"yes"<<" ";
        cout<<ans<<endl;
    }
}

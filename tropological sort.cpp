#include<bits/stdc++.h>
using namespace std;

int frr[200];
vector<int>adj[200];
bool vis[200];
int n,k;

void top_sort()
{
    vector<int>v;
    queue<int>q;
    for(int i=1;i<=n;i++)
    {
        if(frr[i]==0)q.push(i);
    }
    int counter=0;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        v.push_back(f);
        for(int i=0;i<adj[f].size();i++)
        {
            if(--frr[adj[f][i]]==0)
            {
                q.push(adj[f][i]);
            }
        }
        counter++;
    }
    if(counter!=n)
    {
        cout<<"there was a cycle"<<endl;
        return ;
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}


int main()
{

    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        frr[b]++;
    }
    top_sort();
}

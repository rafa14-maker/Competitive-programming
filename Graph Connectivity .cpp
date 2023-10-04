#include<bits/stdc++.h>
using namespace std;

bool vis[200];
vector<int>adj[200];

void dfs(int n)
{
    vis[n]=true;
    for(int i=0;i<adj[n].size();i++)
    {
        if(vis[adj[n][i]]==false)dfs(adj[n][i]);
    }
}


int main()
{
    int q;
    cin>>q;
    char s[10];
    getchar();
    while(q--)
    {
       gets(s);
        if(s=="")break;
       // cout<<s<<endl;
        int n=(int)s[0]-'A';
    int p=0;
    //getchar();
        while(gets(s))
        {
            if(s[0]=='\0')break;
        int a=(int)s[0]-'A';
        int b=(int)s[1]-'A';
        adj[a].push_back(b);
        adj[b].push_back(a);
        p++;
        }
        int sum=0;
        memset(vis,false,sizeof n);
        for(int i=0;i<=n;i++)
        {
           if(vis[i]==false)dfs(i);
           int counter=0;
           for(int i=0;i<=n;i++)if(vis[i]==true)counter++;
             sum=max(sum,counter);
        }

        cout<<sum<<endl;
    }
}

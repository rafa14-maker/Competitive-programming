#include<bits/stdc++.h>
using namespace std;

vector<int>adj[3000];
vector<int>gd;
vector<int>bd;
char arr[500][500];
map<int,char>mp;

bool vis[505];

int kpkc;

bool bfs(int n)
{
    vis[n]=true;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        vis[f]=true;
        if(f==kpkc)return true;

        for(int i=0;i<adj[f].size();i++)
        {
            int a=adj[f][i];
            if(mp[a]=='#')continue;
            if(vis[a])continue;
            if(a==kpkc)return true;
            q.push(a);
        }
    }
    return false;
}

bool good()
{
   for(int i=0;i<gd.size();i++)
   {
       memset(vis,false,sizeof vis);
       if(!bfs(gd[i]))return false;
   }
   return true;
}

bool bad()
{
    for(int i=0;i<bd.size();i++)
    {
           memset(vis,false,sizeof vis);
       if(bfs(bd[i]))return false;
    }
    return true;
}

void solve()
{
    gd.clear();
    bd.clear();
    int n,m;
    cin>>n>>m;
    bool tr=true;
    bool fr=true;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }
    int frr[n+5][m+5];

    int counter=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='G')tr=false;
            if(arr[i][j]=='B')fr=false;
            counter++;
            frr[i][j]=counter;
            mp[counter]=arr[i][j];
        }
    }

    if(tr)
    {
        cout<<"Yes"<<endl;
        return;
    }

    kpkc=frr[n-1][m-1];

    for(int i=0;i<=counter;i++)adj[i].clear();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='B')bd.push_back(frr[i][j]);
            if(arr[i][j]=='G')gd.push_back(frr[i][j]);
            int k=frr[i][j];
            if(i+1<n&&arr[i+1][j]!='#')adj[k].push_back(frr[i+1][j]);
            if(i-1>=0&&arr[i-1][j]!='#')adj[k].push_back(frr[i-1][j]);
            if(j+1<m&&arr[i][j+1]!='#')adj[k].push_back(frr[i][j+1]);
            if(j-1>=0&&arr[i][j-1]!='#')adj[k].push_back(frr[i][j-1]);
        }
    }

    if(fr)
    {
        if(good())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        return;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='.')
            {
                int p=frr[i][j];
                char ch=mp[p];
                mp[p]='#';
                bool a=good();
                bool b=bad();
                if(a&&b)
                {
                    cout<<"Yes"<<endl;
                    return;
                }
                if(!a)
                {
                    mp[p]=ch;
                }
               // cout<<i<<" "<<j<<" "<<a<<" "<<b<<endl;
            }
        }
    }
    cout<<"No"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

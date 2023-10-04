#include<bits/stdc++.h>
using namespace std;

int n;
char frr[25][25];
set<string>sk;
bool vis[25][25];

void f(int i,int j,string s)
{
    if(s.size()>n*n)return;
    if(vis[i][j])return;

    vis[i][j]=true;

    s+=frr[i][j];

    bool tr=true;

    for(int a=-1;a<=1;a++)
    {
        for(int b=-1;b<=1;b++)
        {
            if(a==0&&b==0)continue;
            if(a+i>=0&&a+i<n&&b+j>=0&&b+j<n&&frr[i][j]<frr[i+a][b+j]){f(i+a,b+j,s),tr=false;}
        }
    }

  if(s.size()>=3)  sk.insert(s);

   vis[i][j]=false;
}

void solve()
{
    sk.clear();
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)cin>>frr[i][j],vis[i][j]=false;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            f(i,j,"");
        }
    }
    vector<string>vs;
    for(auto it=sk.begin();it!=sk.end();it++)vs.push_back(*it);
    for(int i=0;i<vs.size();i++)
    {
        for(int j=0;j<vs.size();j++)
        {
            if(vs[i].size()<vs[j].size()||(vs[i].size()==vs[j].size()&&vs[j]>vs[i]))
            {
                swap(vs[i],vs[j]);
            }
        }
    }
    for(int i=0;i<vs.size();i++)cout<<vs[i]<<"\n";
}

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        solve();
        if(q)puts("");
    }
}

#include<bits/stdc++.h>
using namespace std;

vector<int>adj[200];

void solve()
{
    vector<pair<int,int> >v;
    for(int i=0;i<=200;i++)
    {
       int a=pow(i,3);
       v.push_back(make_pair(a,i));
    }

   for(int i=2;i<=200;i++)
    {
        for(int j=i+1;j<=200;j++)
        {
            for(int k=j+1;k<=200;k++)
            {
                int a=pow(i,3)+pow(j,3)+pow(k,3);

                for(int b=0;b<v.size();b++)
                {
                    if(v[b].first==a)
                    {
                        int p=v[b].second;
                        adj[p].push_back(i);
                        adj[p].push_back(j);
                        adj[p].push_back(k);
                    }
                }

            }
        }
    }
    for(int i=0;i<=200;i++)
    {
        if(adj[i].size()>0)
        {
            for(int j=0;j<adj[i].size();j+=3){
            printf("Cube = %d, Triple = (%d,%d,%d)\n",i,adj[i][j],adj[i][j+1],adj[i][j+2]);
            }
        }
    }
}

int main()
{
    solve();
}

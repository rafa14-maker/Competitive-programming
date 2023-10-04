#include<bits/stdc++.h>
using namespace std;

struct  tree
{
    int id;
    int from;
    int to;
    int cost;
    bool operator >(const tree &e) const
    {
        return this->cost > e.cost;
    }

};

vector<vector<tree> >ele(105);

int ti[105];

int n,m;

void cal(int idx)
{
       string str;
       getline(cin,str);
       stringstream ss;
       ss<<str;
        vector<int>v;
       int val;
       while(ss>>val)
       {
        v.push_back(val);
       }

       for(int i=0;i<v.size();i++)
       {
           for(int j=i+1;j<v.size();j++)
           {
               tree e;
               e.id=idx;
               e.from=v[i];
               e.to=v[j];
               e.cost = 0;
               ele[v[i]].push_back(e);
               e.from = v[j];
               e.to = v[i];
               ele[v[j]].push_back(e);
           }
       }
}

void solve()
{
    for(int i=0;i<=100;i++)ele[i].clear();

    for(int i=1;i<=n;i++)cin>>ti[i];

    getchar();

    for(int i=1;i<=n;i++)cal(i);

    priority_queue<tree,vector<tree>,greater<tree> >pq;

    vector<int>sho(105,-1);
    vector<int>id(105,-1);

    tree e;
    e.from=0;
    e.to=0;
    e.cost=0;

    sho[0]=0;
    pq.push(e);

    while(!pq.empty())
    {
        tree u = pq.top();
        pq.pop();
        for(int i=0;i<ele[u.to].size();i++)
        {
            tree v = ele[u.to][i];
            int c = sho[v.from]+abs(v.to-v.from)*ti[v.id];
            if(id[v.from]!=-1&&id[v.from]!=v.id)
            {
                c+=60;
            }
            if(sho[v.to]==-1||c<sho[v.to])
            {
                sho[v.to]=c;
                v.cost = c;
                id[v.to] = v.id;
                pq.push(v);
            }
        }
    }

    if(sho[m]==-1)cout<<"IMPOSSIBLE"<<endl;
    else cout<<sho[m]<<endl;
}

int main()
{
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        solve();
    }
}

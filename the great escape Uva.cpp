#include<bits/stdc++.h>
using namespace std;

int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

char fn[]={'N','S','W','E'};

map<pair<char,char>,int>factor;

void set_factor()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(fn[i]==fn[j])factor[{fn[i],fn[j]}]=2;
            else if(((fn[i]=='E'||fn[i]=='W')&&(fn[i]=='E'&&fn[i]=='W'))||((fn[i]=='N'||fn[i]=='S')&&(fn[i]=='N'&&fn[i]=='S')))
            {
                factor[{fn[i],fn[j]}]=0;
            }
            else factor[{fn[i],fn[j]}]=1;
        }
    }
}

const int Max = 1e2+5,inf = INT_MAX;

int n,m,d[Max][Max],vis[Max][Max];

vector<string>graph;

int get_cost(int i,int j,int idx)
{
    if(graph[i][j]=='.')return 1;
    return (factor[{graph[i][j],fn[idx]}]*d[i][j])+1;
}

bool valid(int i,int j,int idx)
{
    if(i<0||n<=i||j<0||m<=j||graph[i][j]=='#'||(graph[i][j]!='.'&&graph[i][j]!=fn[idx]))return false;
    return true;
}

void memset_vis()
{
    for(int i=0;i<Max;i++)
    {
        for(int j=0;j<Max;j++)
        {
            vis[i][j]=inf;
        }
    }
}

void dij(int w,int i,int j)
{
    priority_queue<pair<int,pair<int,int> >,vector<pair<int,pair<int,int> > >,greater<pair<int,pair<int,int> > > >pq;
    memset_vis();
    vis[i][j]=w;
    pq.push({vis[i][j],{i,j}});
    while(!pq.empty())
    {
        pair<int,pair<int,int> >f = pq.top();
        w = f.first;
        i = f.second.first;
        j = f.second.second;

       // cout<<i<<" "<<j<<endl;

        pq.pop();
        if(vis[i][j]!=w)continue;
        for(int idx=0;idx<4;idx++)
        {
            int ii = i+fx[idx];
            int jj = j+fy[idx];
            if(!valid(ii,jj,idx))continue;
            w=get_cost(i,j,idx);
            if(vis[i][j]+w<vis[ii][jj])
            {
                vis[ii][jj] = vis[i][j]+w;
                pq.push({vis[ii][jj],{ii,jj}});
            }
        }
    }
}

int main()
{
    set_factor();
    int t=1;
    cin>>t;
    for(int kase=1;kase<=t;kase++)
     {
        cin>>n>>m;
      //  getchar();
        graph = vector<string>(n+5);

        for(int i=0;i<n;i++)cin>>graph[i];

       for(int i=0;i<n;i++)
       {
           //cin>>graph[i];
           for(int j=0;j<m;j++)
           {
               if(graph[i][j]!='#'&&graph[i][j]!='.')cin>>d[i][j];
           }
       }


    dij(0,n-1,0);
    if(vis[0][m-1]==inf)cout<<"Poor Kianoosh"<<endl;
    else cout<<vis[0][m-1]<<endl;
    }

}

#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>adj[30];
int h=0,visit=0;

bool vis[30];

void f(int v)
{

    bool vis[30];
    memset(vis,false,sizeof vis);
   queue<int>q;
   q.push(v);
   int flag=0;

   vector<int>frr;

   while(!q.empty())
   {

       int f=q.front();
       frr.push_back(f);
    //   cout<<f<<" ";
       q.pop();
       vis[f]=true;

      for(int i=0;i<adj[f].size();i++)
       {
           if(vis[adj[f][i]]!=true)
           {
               q.push(adj[f][i]);
               vis[adj[f][i]]=true;
           }
       }
   }

  int t=0;

  for(int i=0;i<frr.size();i++)
  {
      if(frr[i]==visit)t=i+1;
  }

  int counter=0,i=0,j=0;

  while(j<t)
  {
      j+=pow(2,i);
   i++;
  }
  h=i;
  // cout<<endl;
}

int main()
{
    cin>>n>>m;
    char arr[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>arr[i][j];
    }
    int frr[n+5][m+5];
   int k=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            frr[i][j]=k;
            k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(frr[i][j]!='#'){
            int a=frr[i][j];
            if(i-1>=0&&arr[i-1][j]!='#')adj[a].push_back(frr[i-1][j]);
             if(j-1>=0&&arr[i][j-1]!='#')adj[a].push_back(frr[i][j-1]);
              if(i+1<n&&arr[i+1][j]!='#')adj[a].push_back(frr[i+1][j]);
               if(j+1<m&&arr[i][j+1]!='#')adj[a].push_back(frr[i][j+1]);
        }
        }
    }
    vector<pair<int,int> >pi;
      pi.push_back(make_pair(0,0));
        pi.push_back(make_pair(0,m-1));
          pi.push_back(make_pair(n-1,0));
            pi.push_back(make_pair(n-1,m-1));

            int sum=0;


            for(int i=0;i<4;i++)
            {
                for(int j=0;j<4;j++)
                {
                    if(i!=j)
                    {
                        int a=pi[i].first;
                        int b=pi[i].second;
                        int c=pi[j].first;
                        int d=pi[j].second;

                        visit=frr[c][d];
                        int y=frr[a][b];

                        if(visit==0||y==0)continue;

                      //  memset(vis,false,sizeof vis);
                        h=9999999;
                        f(y);
                         sum=max(h,sum);
                        cout<<y<<" "<<visit<<" "<<h<<endl;
                    }
                }
            }
 // cout<<sum<<endl;

}

#include<bits/stdc++.h>
using  namespace std;

int n,cnt;
int arr[150][150];
bool vis[150][150];

int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};

void f(int i,int j)
{
    if(vis[i][j])return ;
    vis[i][j]=true;
    cnt++;
    for(int a=0;a<4;a++)
    {
       int kp=i+dx[a];
       int pk=j+dy[a];
       if(kp>=0&&kp<n&&pk>=0&&pk<n&&arr[i][j]==arr[kp][pk])
       {
           f(kp,pk);
       }
    }
}

void solve()
{
    memset(vis,false,sizeof vis);
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)arr[i][j]=n;

    for(int j=1;j<=n-1;j++)
    {
            string s;
             getline(cin,s);
            stringstream is(s);
            int x, y;
            while(is>>x>>y)
            {
                arr[x-1][y-1] = j;
            }
    }

    int px=0;
    bool tr=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!vis[i][j])
            {
                px++;
                cnt=0;
                f(i,j);
                if(cnt!=n)tr=false;
            }
        }
    }

    if(tr)cout<<"good"<<"\n";
    else cout<<"wrong"<<"\n";

}

int main()
{
    while(1)
    {
        cin>>n;
        getchar();
        if(n==0)break;
       solve();
    }
}

#include<bits/stdc++.h>
using namespace std;

int n,m;
int a1,a2,b1,b2;
char frr[1000][1000];
bool vis[1000][1000];
int kp;

void f(int i,int j,int cnt)
{
    if(i==b1&&j==b2)
    {
        if(kp==-1)kp=cnt;
        else kp=min(kp,cnt);
        return;
    }
    if(i>=n||j>=m||i<0||j<0)return ;
    if(frr[i][j]=='#')return ;
    if(i+1<n&&!vis[i+1][j])
    {
        vis[i+1][j]=true;
        f(i+1,j,cnt);
    }
    if(j+1<m&&!vis[i][j+1])
    {
        vis[i][j+1]=true;
        f(i,j+1,cnt);
    }
    if(i-1>=0&&!vis[i-1][j])
    {
        vis[i-1][j]=true;
        f(i-1,j,cnt);
    }
    if(j-1>=0&&!vis[i][j-1])
    {
        vis[i][j-1]=true;
        f(i,j-1,cnt);
    }


   for(int a=-2;a<=2;a++)
   {
       for(int b=-2;b<=2;b++)
       {
          int k=i+a,p=j+b;
          if(k<0||k>=n||p<0||p>=m||p==0&&k==0)continue;
          f(k,p,cnt+1);
       }
   }

   //cout<<kp<<endl;
}

int main()
{
    cin>>n>>m;
    cin>>a1>>a2;
    a1--,a2--;
    cin>>b1>>b2;
    b1--,b2--;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cin>>frr[i][j];
    }
    memset(vis,false,sizeof vis);
    kp=-1;
    f(a1,a2,0);
     cout<<kp<<endl;
}

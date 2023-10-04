#include<bits/stdc++.h>
using namespace std;

int n,m,k;
int a,b;
char frr[150][150];
char dic[]={'N','E','S','W'};
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int idx,cnt;

void f()
{
    int tx=a+dx[idx];
    int ty=b+dy[idx];
    if(tx>=n||ty>=m||tx<0||ty<0)return;
    if(frr[tx][ty]=='#')return ;
    if(frr[tx][ty]=='*')cnt++;
    frr[tx][ty]='.';
    a=tx;
    b=ty;
}

void solve()
{
    cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>frr[i][j];
            if(frr[i][j]=='N')
            {
                idx=0;
                a=i;
                b=j;
            }
            if(frr[i][j]=='S')
            {
                idx=2;
                a=i;
                b=j;
            }
            if(frr[i][j]=='L')
            {
                idx=1;
                a=i;
                b=j;
            }
            if(frr[i][j]=='O')
            {
                idx=3;
                a=i;
                b=j;
            }
        }
    }
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='D')
        {
            idx= (idx+1)%4;
        }
        else if(s[i]=='E')
        {
            idx=(idx+3)%4;
        }
        else if(s[i]=='F')
        {
            f();
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    while(1)
    {
        cin>>n>>m>>k;
        if(n==0&&m==0&&k==0)break;
        solve();
    }
}

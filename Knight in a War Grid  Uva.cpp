#include<bits/stdc++.h>
using namespace std;

int t,r,c,m,n,w,cs;
vector<vector<int> >a,vis;
vector<int>dr,dc;

int even,odd;

int fill(int x,int y){
    if(x<0||x>=r||y<0||y>=c||a[x][y]==-1)
        return 0;
    if(!vis[x][y]){
        vis[x][y]=1;
        int ans=fill(x+dr[0],y+dc[0]);
        if(m)
            ans+=fill(x+dr[2],y+dc[2]);
        if(n)
            ans+=fill(x+dr[1],y+dc[1]);
        if(m&&n)
            ans+=fill(x+dr[3],y+dc[3]);
        if(m!=n){
            ans+=fill(x+dr[4],y+dc[4]);
            if(m)
                ans+=fill(x+dr[6],y+dc[6]);
            if(n)
                ans+=fill(x+dr[5],y+dc[5]);
            if(m&&n)
                ans+=fill(x+dr[7],y+dc[7]);
        }
        if(ans&1)
            odd++;
        else
            even++;
    }
    return 1;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cs++;
        cin>>r>>c>>m>>n>>w;
        a.assign(r,vector<int>(c));
        vis.assign(r,vector<int>(c));
        while(w--)
        {
            int x,y;
            cin>>x>>y;
            a[x][y]=-1;
        }
        dr={m,m,-m,-m,n,-n,n,-n};
        dc={n,-n,n,-n,m,m,-m,-m};
        even=0;
        odd=0;
        fill(0,0);
      printf("Case %d: %d %d\n",cs,even,odd);
    }
}

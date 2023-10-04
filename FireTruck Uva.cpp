#include<bits/stdc++.h>
using namespace std;
int n;
int path[30],pathcnt;
bool frr[30][30],vis[30];

int check(int st) {
    int Q[25], Qt, i, j, used[25] = {0}, tn;
    Q[Qt = 0] = st;
    for(i = 0; i <= Qt; i++) {
        tn = Q[i];
        if(tn == n) return 0;
        for(j = 1; j <= 21; j++) {
            if(vis[j] == 0 && frr[tn][j] && used[j] == 0)
                used[j] = 1, Q[++Qt] = j;
        }
    }
    return 1;
}

void f(int u,int cnt)
{
    if(u==n)
    {
        pathcnt++;
        printf("1");
        for(int i=0;i<cnt;i++)
        {
            printf(" %d",path[i]);
        }
        printf("\n");
        return;
    }
    for(int i=1;i<=21;i++)
    {
        if(frr[u][i]&&!vis[i])
        {
            if(check(i))continue;
            vis[i]=1;
            path[cnt]=i;
            f(i,cnt+1);
            vis[i]=0;
        }
    }
}

void solve(int test)
{
    memset(path,0,sizeof path);
    memset(frr,false,sizeof frr);
    memset(vis,false,sizeof vis);

    while(1)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)break;
        frr[a][b]=true;
        frr[b][a]=true;
    }

    pathcnt=0;

    printf("CASE %d:\n",test);

    vis[1]=1;

    f(1,0);

    printf("There are %d routes from the firestation to streetcorner %d.\n",pathcnt,n);

}

int main()
{
    int test=0;
   while(scanf("%d",&n)!=EOF)
   {
       solve(++test);
   }
}

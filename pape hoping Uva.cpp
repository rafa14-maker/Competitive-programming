#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+5;

int n,m,test,idx;

void solve()
{
    int frr[105][105];

    for(int i=0;i<105;i++)
    {
        for(int j=0;j<105;j++)frr[i][j]=N;
    }

    frr[n][m]=1;
   // frr[m][n]=1;

    idx=0;

    while(1)
    {
        if(n==0&&m==0)break;
        cin>>n>>m;
        if(n==0&&m==0)break;
        frr[n][m]=1;
       // frr[m][n]=1;
        idx=0;
    }

    for(int k=1;k<=100;k++)
    {
        for(int i=1;i<=100;i++)
        {
            for(int j=1;j<=100;j++)
            {
                frr[i][j]=min(frr[i][j],frr[i][k]+frr[k][j]);
            }
        }
    }

    double ans=0;

   for(int i=1;i<=100;i++)
        {
            for(int j=1;j<=100;j++)
            {
              if(frr[i][j]!=N&&i!=j)ans+=frr[i][j],idx++;
            }
        }

      printf("Case %d: average length between pages = ",++test);
      ans  = ans/idx;
      printf("%.3lf",ans);
     // cout<<" "<<idx;
      printf(" clicks\n");

}

int main()
{
    while(1)
    {
        cin>>n>>m;
        if(n==0&&m==0)break;
        solve();
    }
}

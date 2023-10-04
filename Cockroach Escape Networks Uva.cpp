#include<bits/stdc++.h>
using namespace std;

const int N = 1e8+7;

int frr[25][25];
int n,m,test;

void solve()
{
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            frr[i][j]=N;
        }
    }

    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        frr[a][b]=1;
     //   frr[b][a]=1;
    }

    int mx=0;

    for(int k=0;k<n;k++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)continue;
                frr[i][j]=min(frr[i][j],frr[i][k]+frr[k][j]);
               // if(frr[i][j]!=N)mx=max(mx,frr[i][j]);
              //  cout<<i<<" "<<j<<" "<<frr[i][j]<<endl;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        //    cout<<frr[i][j]<<" "<<i<<" "<<j<<endl;
         if(frr[i][j]!=N)  mx=max(mx,frr[i][j]);
        }
    }

    printf("Case #%d:\n",++test);
    printf("%d\n\n",mx);

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

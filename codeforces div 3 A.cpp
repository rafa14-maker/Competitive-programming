#include<bits/stdc++.h>
using namespace std;

const int N= 2*1e5+5;

void solve()
{
    int frr[N]={0};
    int px[N]={0};
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);

        int a=arr[i];
      if(frr[a]==0&&i!=0)
      {
          if(arr[0]!=a)px[a]++;
          else if(i!=1&&arr[0]==a)px[a]++;
      }
       else if(i-frr[a]>1)px[a]++;

        frr[a]=i;

       // cout<<a<<" "<<frr[a]<<" "<<px[a]<<" "<<endl;
    }

    int mn=1e9;

    for(int i=0;i<n;i++)
    {
        int a=arr[i];
        if(frr[a]==n-1)
        {
            mn=min(mn,px[a]);
        }
        else mn=min(mn,px[a]+1);
    }

    printf("%d\n",mn);

 /*   int mn = 1e9;

    for(int i=0;i<=N;i++)
    {
        if(adj[i].size()>0)
        {
            int cnt=0;

            if(adj[i].size()>1){
            for(int j=0;j<adj[i].size();j++)
            {
                if(j==0)
                {
                   if(adj[i][j]==0)cnt=0;
                   else cnt++;
                }
               else if(adj[i][j]-adj[i][j-1]>1)
                {
                    cnt++;
                }

                if(j==adj[i].size()-1)
                {
                    if(adj[i][j]!=n-1)cnt++;
                }
             /*   else
                {
                    cnt+=adj[i][j]-adj[i][j-1]-1;
                }
            }
            }
            else
            {
                if(adj[i][0]==0||adj[i][0]==n-1)cnt=1;
                else cnt=2;
            }
            mn=min(mn,cnt);
        }
    }
   printf("%d\n",mn);*/




}

int main()
{
    int q;scanf("%d",&q);while(q--)solve();
   // solve();
}


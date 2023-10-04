#include<bits/stdc++.h>
using namespace std;

const int N =1e5+5;
bool prime[N];
int idx[N];

void seive()
{
    memset(prime,true,sizeof prime);
    for(int i=2;i*i<=N;i++)
    {
        if(prime[i]==true)
        {
            for(int j=i*2;j<=N;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    prime[1]=false;
    int cnt=N;
    for(int i=N;i>=0;i--)
    {
        if(prime[i])cnt=min(i,cnt);
        idx[i]=cnt;
    }
    idx[1]=2;
}


void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5][m+5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int ans=1e9;

    for(int b=0;b<m;b++)
    {
           int kp=0;
           for(int i=0;i<n;i++)
           {
               int cnt=arr[i][b];
               if(!prime[cnt])
               {
                   kp+=(idx[cnt]-cnt);
               }
           }
           ans=min(ans,kp);
    }

    for(int a=0;a<n;a++)
    {
           int kp=0;
           for(int i=0;i<m;i++)
           {
               int cnt=arr[a][i];
               if(!prime[cnt])
               {
                   kp+=(idx[cnt]-cnt);
               }
           }
           ans=min(ans,kp);
    }


    cout<<ans<<endl;

}

int main()
{
    seive();
    solve();
}

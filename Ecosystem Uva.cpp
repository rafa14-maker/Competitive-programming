#include<bits/stdc++.h>
using namespace std;
using ll=long long;

void solve(ll n)
{
    ll arr[n+5][n+5];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)cin>>arr[i][j];
    }

    int idx=0;

    int counter=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j&&arr[i][j])
            {
                for(int k=1;k<=n;k++)
                {
                    if(k!=j&&k!=i&&arr[i][j]&&arr[j][k]&&arr[k][i])
                    {
                        if((i<j&&j<k)||(i>j&&j>k))
                        {
                            cout<<i<<" "<<j<<" "<<k<<endl;
                            idx++;
                        }
                    }
                }
            }
        }
    }



    printf("total:%d\n",idx);
    printf("\n");
}

int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        solve(n);
    }
}

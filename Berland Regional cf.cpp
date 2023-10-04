#include<bits/stdc++.h>
using namespace std;
using ll = long long ;
const int N = 2*1e5+5;

vector<ll>adj[N];
ll frr[N];

void solve()
{
    int n,m;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++)
    {
        frr[i]=0;
        adj[i].clear();
    }
    int krr[n+5];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&krr[i]);
    }

    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        int b = krr[i];
       adj[b].push_back(a);
    }

    for(int i=1;i<=n;i++)sort(adj[i].begin(),adj[i].end());

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<adj[i].size();j++)
        {
            adj[i][j]+=adj[i][j-1];
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(adj[i].size()==0)continue;
        ll len = adj[i].size()-1;
        ll sum = adj[i][len];
        frr[1]+=sum;
        frr[len+1]+=sum;
        for(int j=2;j<len+1;j++)
        {
            ll mk = (len+1)%j;
            if(mk==0)frr[j]+=sum;
            else frr[j]+=sum-adj[i][mk];
        }
    }

   for(int i=1;i<=n;i++)printf("%lld ",frr[i]);
    printf("\n");

}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mat[101][101],m[101][101],f[101][101],C;
void mul(ll a[101][101],ll b[101][101])
{
    memset(mat,0,sizeof(mat));
    for(int i=0;i<C;i++){
        for(int j=0;j<C;j++){
            for(int k=0;k<C;k++){
                mat[i][j]+=(a[i][k]*b[k][j]);
            }
        }
    }
    for(int i=0;i<C;i++)
        for(int j=0;j<C;j++) a[i][j]=mat[i][j];
}
void power(ll p[101][101],ll t)
{
    if(t==1) return;
    power(p,t/2);
    mul(p,p);
    if(t & 1) mul(p,m);
}
int main()
{
    ll C,L,u,v,d;
    while(scanf("%lld%lld",&C,&L))
    {
        if(L==0&&C==0)break;
        memset(f,0,sizeof(f));
        memset(m,0,sizeof(m));

        for(int i=0;i<L;i++)
        {
            cin>>u>>v;
            f[u][v]=f[v][u]=1;
            m[u][v]=m[v][u]=1;
        }
        scanf("%lld%lld%lld",&u,&v,&d);
        power(f,d);
        if(!f[u][v]) cout<<"Yes, Teobaldo can travel.\n";
        else cout<<"No, Teobaldo can not travel.\n";
    }
}

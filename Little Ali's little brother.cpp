#include<bits/stdc++.h>
using namespace std;

char g[60][60],mg[60][60];

int n,m,x,y,s;

int f(int N, int M, int n, int m) {
    int i, j, k, p, q;
    for(i = -N; i < N; i++) {
        for(j = -M; j < M; j++) {
            int ok = 1;
            for(p = 0; p < n; p++) {
                for(q = 0; q < m; q++) {
                    if(mg[p][q] == '.')
                        continue;
                    if(p+i < 0 || p+i >= N || q+j < 0 || q+j >= M)
                        ok = 0, p = n, q = m;
                    else {
                        if(g[p+i][q+j] == '.')
                            ok = 0, p = n, q = m;
                    }
                }
            }
            if(ok)    return 1;
        }
    }
    return 0;
}
void solve()
{
   // int n,m,s;
    cin>>n>>m>>s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>g[i][j];
        }
    }

    while(s--)
    {
        cin>>x>>y;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)cin>>mg[i][j];
        }
        if(f(n,m,x,y))
        {
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
  cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

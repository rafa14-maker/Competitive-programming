#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int maxn = 250;
const int maxm = 6050;

int n,m,cnt;
int pa[maxn];
int test;

struct Edge
{
    int to;
    int from;
    int dis;
    Edge(int f = 0,int t = 0,int d = 0):from(f),to(t),dis(d){};

}edges[maxm];

bool cmp(Edge a, Edge b)
{
    return a.dis < b.dis ;
}

int fi(int x)
{
    if(pa[x] == x)return x;
    return fi(pa[x]);
}

int kru()
{
    for(int i=0;i<=n;i++)pa[i] = i;

    int cpy = cnt,num =0,ans =0;

    for(int i=0;i<cpy;i++)
    {
        int x = fi(edges[i].from);
        int y = fi(edges[i].to);
        if(x == y)
        {
            edges[i] = edges[cnt-1];
            cnt--;
            continue;
        }
        num++;
        pa[x] = y;
        ans += edges[i].dis;
    }
 //  cout << num <<endl;
    if(num < n-1)return -1;
    else return ans;
}


void solve()
{
   // cout<<"yes"<<endl;
   cin>>n>>m;

     printf("Case %d:\n", ++test);

     cnt = 0;

     for(int i=0;i<m;i++)
     {
         int a,b,c;
         cin>>a>>b>>c;
         edges[cnt] = Edge(a,b,c);
         cnt++;
         sort(edges,edges+cnt,cmp);
         int ans = kru();
        printf("%d\n",ans);
     }

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

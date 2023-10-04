#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define N 200010
#define A 1000010
#define BLOCK 174
#define M 200010

ll answer;
struct query
{
    int l,r,ind;
}Q[M];
ll ans[M];
int a[N];
int cnt[A];
int n,k;

void add(int index)
{
    ll u = a[index];
    ll f = cnt[u];
    answer -= f*f*u;
    cnt[u]++;
    f++;
    answer += f*f*u;
   // if(cnt[a[index]]==1) answer++;
}

void del(int index)
{
   // cnt[a[index]]--;
   // if(cnt[a[index]]==0) answer--;
    ll u = a[index];
    ll f = cnt[u];
    answer -= f*f*u;
    cnt[u]--;
    f--;
    answer += f*f*u;
}

bool cmp(query f,query s)
{
    if((f.l/BLOCK)!=(s.l/BLOCK))
        return (f.l/BLOCK)<(s.l/BLOCK);
    else
        return f.r<s.r;
}

void solve()
{
   // cout<<"yes"<<endl;

  scanf("%d",&n);
  scanf("%d",&k);

  for(int i=1;i<=n;i++)scanf("%d",&a[i]);

  for(int i=1;i<=k;i++)
  {
      int lk,rk;
       scanf("%d",&lk);
        scanf("%d",&rk);
      Q[i].l = lk;
      Q[i].r = rk;
      Q[i].ind = i;
  }

  sort(Q+1,Q+k+1,cmp);

  int cl =0,cr =0;
    for(int i=1;i<=k;i++)
    {
        int left=Q[i].l,right=Q[i].r;
        while(cl<left)
            del(cl),cl++;
        while(cl>left)
            add(cl-1),cl--;
        while(cr<=right)
            add(cr),cr++;
        while(cr>(right+1))
            del(cr-1),cr--;
        ans[Q[i].ind]=answer;

      //  cout << cl<<" "<<cr<<" "<<answer<<endl;
    }

    for(int i=1;i<=k;i++)printf("%lld\n",ans[i]);


}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}


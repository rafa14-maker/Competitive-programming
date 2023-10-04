#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define N 100005
#define A 1000010
#define BLOCK 372
#define M 2000100

ll answer;
struct query
{
    int l,r,ind;
}Q[M];
ll ans[M];
int a[N];
ll cnt[A];

void add(int index)
{
  ll k =cnt[a[index]];
  ll w =  cnt[a[index]]/2;
  answer-=w;
  cnt[a[index]]++;
  k++;
  w = k/2;
  answer+=w;
}

void remove(int index)
{
   ll k =cnt[a[index]];
  ll w =  cnt[a[index]]/2;
  answer-=w;
  cnt[a[index]]--;
  k--;
  w = k/2;
  answer+=w;
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
  //  cout<<"yes"<<endl;

  int n;
  cin>>n;
  for(int i=0;i<n;i++)cin>>a[i];
  int q;
  cin>>q;
  for(int i=0;i<q;i++)
  {
      int a,b;
      cin>>a>>b;
      Q[i].ind = i;
      Q[i].l = a-1;
      Q[i].r = b-1;
  }
  sort(Q,Q+q,cmp);

  int cl=0,cr=0;
    for(int i=0;i<q;i++)
    {
        int left=Q[i].l,right=Q[i].r;
        while(cl<left)
            remove(cl),cl++;
        while(cl>left)
            add(cl-1),cl--;
        while(cr<=right)
            add(cr),cr++;
        while(cr>(right+1))
            remove(cr-1),cr--;
        ans[Q[i].ind]=answer;
    }
    for(int i=0;i<q;i++)
        printf("%lld\n",ans[i]);

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
  solve();
}


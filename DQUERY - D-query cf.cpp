#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 30005;
const int M = 200010;
const int A = 1000010;
const int BLOCK = 174;

int frr[A];
int arr[N];
int ans[M];
int n,k,cnt;

struct query
{
    int l;
    int r;
    int dx;
}q[M];

void add(int idx)
{
    frr[arr[idx]]++;
    if(frr[arr[idx]] == 1)cnt++;
}

void del(int idx)
{
    frr[arr[idx]] --;
    if(frr[arr[idx]] == 0)cnt--;
}

bool cmp(query f,query s)
{
    if((f.l/BLOCK)!=(s.l/BLOCK))
        return (f.l/BLOCK)<(s.l/BLOCK);
    else
        return f.r<s.r;
}

void f()
{
    int l=0 , r=0;

   for(int i=1;i<=k;i++)
   {
       int left = q[i].l;
       int right = q[i].r;
       int d = q[i].dx;

       while(l<left)
            del(l),l++;
        while(l>left)
            add(l-1),l--;
        while(r<=right)
            add(r),r++;
        while(r>(right+1))
            del(r-1),r--;

        ans[d] = cnt;
   }
}

void solve()
{
   // cout<<"yes"<<endl;

   cin>>n;

   for(int i=1;i<=n;i++)cin>>arr[i];

   cin>>k;

   for(int i=1;i<=k;i++)
   {
       int a,b;
       cin>>a>>b;
       q[i].l = a;
       q[i].r = b;
       q[i].dx = i;
   }

   sort(q,q+k,cmp);

   f();

   for(int i=1;i<=k;i++)cout << ans[i] << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
    solve();
}

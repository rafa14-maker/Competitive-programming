#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 3e5+5;
const int BLOCK = 372;

int answer;
struct query
{
    int l,r,ind,c;
}Q[N];

int ans[N];
int mp[N];
int arr[N];
int cnt[N];
int n,k;
multiset<int>mt;

void add(int index)
{
    int f = cnt[arr[index]];
    mt.erase(f);
    cnt[arr[index]]++;
    mt.insert(f+1);
    auto it = mt.lower_bound(f+1);
    mp[*it] = arr[index] ;
//   if(cnt[a[index]]==1) answer++;
}

void del(int index)
{
    int f = cnt[arr[index]];
    mt.erase(f);
    cnt[arr[index]]--;
     mt.insert(f-1);
     auto it = mt.lower_bound(f-1);
    mp[*it] = arr[index] ;
 //   if(cnt[a[index]]==0) answer--;
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
  cin>>n>>k;

  for(int i=1;i<=n;i++)cin>>arr[i];

  for(int i=1;i<=k;i++)
  {
      int lk,rk,ck;
      cin>>lk>>rk>>ck;
     Q[i].l = lk;
     Q[i].r = rk;
     Q[i].ind = i;
     Q[i].c =ck;
  }

  sort(Q+1,Q+1+k,cmp);

     int cl=0,cr=0;
    for(int i=1;i<=k;i++)
    {
        int left=Q[i].l,right=Q[i].r,ck = Q[i].c;
        while(cl<left)
            del(cl),cl++;
        while(cl>left)
            add(cl-1),cl--;
        while(cr<=right)
            add(cr),cr++;
        while(cr>(right+1))
            del(cr-1),cr--;

            int pk = (right-left+1)/ck;
            auto it = mt.lower_bound(pk+1);

  //  if(it == mt.end())answer = -1;
   // else
      answer =   *it ;

   // cout << left <<" "<< right <<" "<< *it <<" "<<pk<< endl;

        ans[Q[i].ind]= answer;


    }

    for(int i=1;i<=k;i++)cout << ans[i] <<"\n";

}

int main()
{
    CherryFrog;
   //int q;cin>>q;while(q--)solve();
   solve();
}


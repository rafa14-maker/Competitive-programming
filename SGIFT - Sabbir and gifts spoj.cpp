#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 1e5+5;

ll arr[N];
ll frr[N];
ll tree[N];
map<ll,int>mp;
map<ll,int>pk;
vector<ll>v;
int n;

int lower(int idx)
{
    int pk = 0;
    int l = 0;
    int r = v.size()-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(v[mid]<=idx)
        {
            pk = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    return v[pk];
}

void solve()
{
   // cout<<"yes"<<endl;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
       scanf("%lld",&arr[i]);
       mp[arr[i]]++;
   }

   int idx = 0;

  for(auto it = mp.begin();it != mp.end();it++)
  {
      v.push_back(it->first);
      tree[idx] = it->first * it->second;
      idx++;
  }


  for(int i=0;i<idx;i++)
  {
      //cout <<v[i] <<" "<<tree[i]<<endl;
      pk[v[i]] = i;
  }

  for(int i=1;i<idx;i++)
  {
      tree[i] += tree[i-1];
  }

  int q;
 scanf("%d",&q);

  while(q--)
  {
      int l,r;
      scanf("%d",&l);
      scanf("%d",&r);
      int x = *lower_bound(v.begin(),v.end(),l);
      int y = lower(r);
     // cout << x << " "<< y<<endl;
     // x--;
     // y--;
       if(l<=x&&y<=r){
      ll sum = tree[pk[y]];
      if(pk[x]-1>=0)sum -= tree[pk[x]-1];
      printf("%lld\n",sum);
       }
       else printf("0\n");
  }

}

int main()
{
    CherryFrog;
  // int q;scanf("%d",&q);while(q--)solve();
    solve();
}


#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0);cin.tie(0)
#define LL long long int
#define ULL unsigned LL

const int inf=1<<30;
const LL INF=1e18;
const int MOD=1e9+7;


int tree1[100005];
int tree2[100005];
int arr[100005];

int BIT_Query(int idx,int cnt)
{
    int sum=0;
    while(idx>0)
    {
        if(cnt == 1)sum+=tree1[idx];
        else sum+= tree2[idx];
        idx=idx - (idx& -idx);
       /// printf("%d ", idx);
    }
    return sum;
}

void BIT_Update(int n, int idx, int val,int cnt)
{

    while(idx<=n)
    {
      if(cnt == 1)  tree1[idx]+=val;
      else tree2[idx]+=val;
        ///printf("%d %d\n", tree[idx], val);
        idx+=(idx& (-idx));
    }
}


void range_add(int n,int l,int r,int x){
    BIT_Update(n, l, x,1);
    BIT_Update(n, r+1, -x,1);
    BIT_Update(n, l, x*(l-1),2);
    BIT_Update(n, r+1, -x*r,2);
}

 int pre_sum(int n,int idx){
    return BIT_Query(idx,1)*idx -  BIT_Query(idx,2) ;
 }

int range_sum(int n,int l,int r){
    return pre_sum(n,r) - pre_sum(n,l-1) ;
}



void BIT_Build(int n,int cnt)
{
    for(int i=1; i<=n; i++)
    {
        BIT_Update(n, i, arr[i],cnt);
    }

}

int main()
{
      int n,k;
      cin>>n>>k;

      memset(tree1,0,sizeof tree1);
       memset(tree2,0,sizeof tree2);

      while(k--)
      {
          int p;
          cin>>p;
          if(p == 1)
          {
              int l,r,val;
              cin>>l>>r>>val;
              range_add(n,l,r,val);
          }
          else
          {
              int l,r;
              cin>>l>>r;
              cout << range_sum(n,l,r) << endl;
          }
      }
}


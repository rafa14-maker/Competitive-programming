#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)



int cal(int n,int cnt)
{
    if(n==1)return cnt+1;
    int ans =0;
    if(n%2==0)ans = cal(n/2,cnt+1);
    else ans = cal(3*n +1,cnt+1);
    return ans ;
}

void solve()
{
   // cout<<"yes"<<endl;
   int n,m;
   while(1)
   {
       cin>>n>>m;
       if(n==0&&m==0)break;
       printf("Between %d and %d, ",n,m);
       if(n>m)swap(n,m);
        int sum = 0,idx = 0;
   for(int i=n;i<=m;i++)
   {
     int ans =   cal(i,0);
     if(sum<ans)
     {
         sum = ans;
         idx = i;
     }
   }

  // cout<< sum<< " "<<idx<<endl;

   printf("%d generates the longest sequence of %d values.\n",idx,sum-1);

   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}


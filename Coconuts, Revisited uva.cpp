#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   while(1)
   {
       cin>>n;
       if(n <= -1)break;

       int ans = 0;

       for(int i=3;i<=8;i++)
       {
           int k = pow(i,i);
           if(n == k-(i-1))ans = i;
       }


      if(ans == 0)printf("%d coconuts, no solution\n",n);
    else printf("%d coconuts, %d people and 1 monkey\n",n,ans);
   }
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
  solve();
}


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test=0;

void solve()
{
   // cout<<"yes"<<endl;
   int a,b;
   cin>>a>>b;
   int sum = 0 ;
   for(int i=a;i<=b;i++)
   {
       if(i%2==1)sum+=i;
   }
   printf("Case %d: %d\n",++test,sum);
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


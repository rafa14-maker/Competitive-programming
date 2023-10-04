#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int a,b;
   cin>>a>>b;

   int frr[]={2,3,5};
   int ans = 0;

   for(int i=0;i<3;i++)
   {
       int x = 0 ,y = 0 ;
       while(a%frr[i] == 0)
       {
           a/= frr[i];
           x++;
       }
       while(b%frr[i] == 0)
       {
           b/= frr[i];
           y++;
       }
       ans += abs(x-y);
   }

   if(a == b)cout<< ans << endl;
   else cout << -1 << endl;

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
    solve();
}


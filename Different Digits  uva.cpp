#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;

   while(scanf("%d %d",&n,&k)!=EOF){

   //cin>>n>>k;

   int sum = 0;

   map<int,int>mp;

   for(int i=n;i<=k;i++)
   {
       mp.clear();

       bool tr = true;

       int p = i;

       while(p>0)
       {
           int r = p%10;
           mp[r]++;
           if(mp[r]>1)
           {
               tr = false;
               break;
           }
           p /= 10;
       }

       if(tr)sum++;

   }

   cout << sum << endl;

   }

}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}


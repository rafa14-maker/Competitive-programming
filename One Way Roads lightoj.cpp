#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int test;

int frr[105][105];

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

 //  int frr[n+5][n+5];
   bool left[n+5];
   bool right[n+5];

   for(int i=1;i<=n;i++)left[i]=false,right[i]=false;

   int leftw=0,rightw=0;

   for(int i=1;i<=n;i++)
   {
       int a,b,c;
       cin>>a>>b>>c;
       if(!left[a]&&!right[b])
       {
           leftw+=c;
           left[a]=right[b]=true;
       }
       else
       {
           rightw+=c;
           right[a]=left[b]=true;
       }
   }

   printf("Case %d: %d\n",++test,min(rightw,leftw));


}

int main()
{
    CherryFrog;
    //cout <<"Baby NO Fly!"<<endl;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


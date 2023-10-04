#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n,m,c,d;
   cin>>n>>m>>c>>d;

   char arr[n+5][m+5];

   bool tr = true;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           cin>>arr[i][j];
           if(arr[i][j] == 'B')tr = false;
       }
   }

   if(arr[c][d]=='B')
   {
       cout<<0<<endl;
       return ;
   }

   if(tr)
   {
       cout<< -1 <<endl;
       return ;
   }

   bool pk = false;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(arr[i][j] == 'B'&&(i==c||d==j))
           {
               cout<<1<<endl;
               return ;
           }
       }
   }

   cout<<2<<endl;

}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}


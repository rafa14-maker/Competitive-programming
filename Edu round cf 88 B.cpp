#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   int n,m,x,y;
   cin>>n>>m>>x>>y;
   char arr[n+5][m+5];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)cin>>arr[i][j];
   }
   ll sum=0;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(arr[i][j]=='.'&&j+1<m&&arr[i][j+1]=='.')
           {
               if(x+x>y)sum+=y;
               else sum+=x+x;

               j++;
           }
           else if(arr[i][j]=='.') sum+=x;
       }
   }
   cout<<sum<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


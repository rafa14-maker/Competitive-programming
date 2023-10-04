#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;
   int n,m;
   cin>>n>>m;

   ll arr[n+5][m+5];

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)cin>>arr[i][j];
   }

   bool tr = true;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(i+1<n&&arr[i][j]!=arr[i+1][j]-7)tr=false;
           if(j+1<m&&arr[i][j]!=arr[i][j+1]-1)tr=false;
           if(j+1<m)
           {
               int a , b;
               if(arr[i][j]%7!=0)a = 1 + arr[i][j]/7;
               else a = arr[i][j]/7;
               if(arr[i][j+1]%7 !=0) b = 1+arr[i][j+1]/7;
               else b = arr[i][j+1]/7;
               if(a!=b) tr=false;
           }
           if(i+1<n)
           {
                 int a , b;
               if(arr[i][j]%7!=0)a = 1 + arr[i][j]/7;
               else a = arr[i][j]/7;
               if(arr[i+1][j]%7 !=0) b = 1+arr[i+1][j]/7;
               else b = arr[i+1][j]/7;
               if(a!=b-1) tr=false;
           }
       }
   }

   if(tr)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;

}

int main()
{
  // int q;cin>>q;while(q--)solve();
   solve();
}


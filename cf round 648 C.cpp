#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void solve()
{
 int n,m;
 cin>>n>>m;
 int arr[n+5][m+5];
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)cin>>arr[i][j];
 }
 int counter=0;
 for(int i=0;i<n;i++)
 {
     for(int j=0;j<m;j++)
     {
         if(arr[i][j]==0)
         {
             bool tr=true;
             for(int k=0;k<n;k++)if(arr[k][j]==1)tr=false;
             for(int k=0;k<m;k++)if(arr[i][k]==1)tr=false;
             if(tr)
             {
                 arr[i][j]=1;
                 counter++;
             }
         }
     }
 }
 if(counter%2==0)cout<<"Vivek"<<endl;
 else cout<<"Ashish"<<endl;
}


int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}


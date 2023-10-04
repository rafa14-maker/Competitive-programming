#include<bits/stdc++.h>
using namespace std;
using ll=long long ;

void solve()
{
   int n;
   cin>>n;
   char arr[n+5][n+5];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>arr[i][j];
       }
   }
   bool tr=true;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(i+1<n&&j+1<n&&arr[i][j]=='1'&&arr[i+1][j]=='0'&&arr[i][j+1]=='0')tr=false;
       }
   }
   if(tr)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();

  //  solve();
}


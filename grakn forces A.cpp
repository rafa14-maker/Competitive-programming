#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[5][n+5];
   for(int j=0;j<3;j++){
   for(int i=0;i<n;i++)
   {
       cin>>arr[j][i];
   }
   }

   vector<int>v;

   for(int i=0;i<n;i++)
   {
       if(i==0)v.push_back(arr[0][i]);
       else if(i==n-1)
       {
           int k=v[0],p=v[i-1];
           if(arr[0][i]!=k&&arr[0][i]!=p)v.push_back(arr[0][i]);
           else if(arr[1][i]!=k&&arr[1][i]!=p)v.push_back(arr[1][i]);
           else if(arr[2][i]!=k&&arr[2][i]!=p)v.push_back(arr[2][i]);
       }
       else if(i<n)
       {
            int k=v[i-1];
           if(arr[0][i]!=k)v.push_back(arr[0][i]);
           else if(arr[1][i]!=k)v.push_back(arr[1][i]);
            else if(arr[2][i]!=k)v.push_back(arr[2][i]);
       }
   }

   for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

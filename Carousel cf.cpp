#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int n;
   cin>>n;
   int arr[n+5];
   int frr[n+5];
   int idx=1e8+7;
   vector<int>v;

   for(int i=0;i<n;i++)cin>>arr[i];

   for(int pk=1;pk<=3;pk++){
   int   cnt=0;
   for(int i=0;i<n;i++)
   {
      // cin>>arr[i];
       if(i==0)frr[i]=pk;
       else if(i==n-1)
       {
          bool tr=false;
          for(int k=1;k<=3;k++)
          {
              tr=true;
              if(frr[i-1]==k&&arr[i-1]!=arr[i])tr=false;
              if(frr[0]==k&&arr[i]!=arr[0])tr=false;
             if(tr)
             {
                 frr[i]=k;
                 break;
             }
          }
       }
       else
       {
           if(arr[i]==arr[i-1])frr[i]=frr[i-1];
           else
           {
               if(frr[i-1]==1)frr[i]=2;
               else frr[i]=1;
           }
       }
       cnt=max(cnt,frr[i]);
   }
     if(cnt<idx)
     {
         idx = cnt;
          v.clear();
          for(int i=0;i<n;i++)v.push_back(frr[i]);
     }
   }
   cout<<idx<<endl;
   for(int i=0;i<n;i++)cout<<v[i]<<" ";cout<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}

/*

1
8
13 13 9 12 13 1 13 1

*/

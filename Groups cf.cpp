#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve()
{
   // cout<<"yes"<<endl;

   int n;
   cin>>n;

   int arr[n+5][10];

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<5;j++)cin>>arr[i][j];
   }

   bool tr=false;
//  bool vis[n+5];

   for(int a = 0;a<5;a++)
   {
       for(int b=0;b<5;b++)
       {
          // memset(vis,false,sizeof vis);
           if(a!=b)
           {
            /*   int cnt = 0, pnt=0;
               for(int i=0;i<n;i++)
               {
                   if(!vis[i]&&arr[i][a]==1)
                   {
                       cnt++;
                       vis[i]=true;
                   }
                   if(!vis[i]&&arr[i][b]==1)
                   {
                       pnt++;
                       vis[i]=true;
                   }
               }
               if(cnt==pnt&&cnt+pnt==n)
               {
                 cout<<"YES"<<endl;
                 return ;
               }*/
               int pnt =0 , cnt = 0, idx = 0;

               for(int i=0;i<n;i++)
               {
                   if(arr[i][a]==1&&arr[i][b]==1)idx++;
                   else if(arr[i][a]==1)cnt++;
                   else if(arr[i][b]==1)pnt++;
               }
              // cout<<cnt<<" "<<pnt<<" "<<idx<<endl;
               if(cnt==pnt&&cnt+pnt==n)
               {
                   cout<<"YES"<<endl;
                   return ;
               }
                if(idx+cnt+pnt==n&&cnt<=n/2&&pnt<=n/2)
               {
                   cout<<"YES"<<endl;
                   return ;
               }

           }
       }
   }
   cout<<"NO"<<endl;
}

int main()
{
   int q;cin>>q;while(q--)solve();
   //solve();
}


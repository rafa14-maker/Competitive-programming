#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;

   int n,k;
   cin>>n>>k;

   int arr[n+5][k+5]={0};

   int idx =1,idx2 = 2;

   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=k;j++)
       {
           if(i%2==1)
           {
               arr[i][j] = idx;
               idx+=2;
           }
           else
           {
               arr[i][j] = idx2;
               idx2+=2;
           }
       }
   }

    for(int i=1;i<=n;i++)
   {
       int sum = 0;
       for(int j=1;j<=k;j++)
       {
         if(arr[i][j]>n*k || (sum+arr[i][j])%j!=0 )
         {
             cout<<"NO"<<endl;
             return ;
         }
         sum+=arr[i][j];
       }
   }

   cout <<"YES"<<endl;
  for(int i=1;i<=n;i++)
   {

       for(int j=1;j<=k;j++)
       {
            cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }




}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
   // solve();
}


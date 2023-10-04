#include<bits/stdc++.h>
using namespace std;

 int n,a,b;

 int arr[1000005];


int main()
{

    cin>>n>>b>>a;

    int k=a,p=b;

        for(int i=0;i<n;i++)cin>>arr[i];


    int counter=0;

     for(int i=0;i<n;i++)
     {
         if(arr[i]==0)
         {
             if(k>0)k--,counter++;
             else if(p>0)p--,counter++;
         }
         else if(arr[i]==1)
         {
             if(k==a)
             {
                 if(k>0)k--,counter++;
                 else if(p>0)p--,counter++;
             }
             else
             {
                  if(p>0)p--,k++,counter++;
                 else if(k>0)k--,counter++;
             }
         }
     }

    cout<<counter<<endl;

   // memset(dp,-1,sizeof dp);
   // cout<<f(0,a,b);
}

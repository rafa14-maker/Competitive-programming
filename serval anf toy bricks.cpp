/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n,m,h;

   cin>>n>>m>>h;

   int frr[m+5];

   for(int i=0;i<m;i++)
   {
       cin>>frr[i];
   }

   int krr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>krr[i];
   }

   int arr[n+2][m+2],p;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cin>>p;
           if(p==1)
           {
               arr[i][j]=min(krr[i],frr[j]);
           }
           else
           {
               arr[i][j]=0;
           }
       }
   }

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }

}




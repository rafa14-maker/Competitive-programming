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


   int n,m=10000000;
   cin>>n;

   int arr[10];

   for(int i=1;i<=9;i++)
   {
       cin>>arr[i];
       m=min(m,arr[i]);
   }
   int l=n/m;

   if(m>n)
   {
       cout<<-1<<endl;
       return 0;
   }
    int k=n;
   for(int i=1;i<=l;i++)
   {
       for(int j=9;j>=1;j--)
       {
           if(arr[j]<=k&&((k-arr[j])/m)>=((n/m)-i)){
            cout<<j;
           k-=arr[j];}
       }
   }

}



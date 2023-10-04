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

   int n,k,r=0,l=1000,j;
   cin>>n>>k;

   int arr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       r=max(arr[i],r);
       l=min(arr[i],l);
   }
   if(r-l>k)
   {
       cout<<"NO"<<endl;
       return 0;
   }
   cout<<"YES"<<endl;
   for(int i=0;i<n;i++)
   {
       for( j=0;j<arr[i]-1;j++)
       {
           cout<<(j%k)+1<<" ";
       }
       cout<<(j%k)+1<<endl;
   }


}




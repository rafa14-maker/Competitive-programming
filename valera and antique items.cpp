/*
  NAME : MUHAMMAD FAHIM HOSSAIN RAFAYEAT

     NICE TO MEET YOU ^____^
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //seive();
     ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n,v;
   cin>>n>>v;

   int frr[n+1];
   int c=0;

   int sum=0;

   for(int i=0;i<n;i++)
   {
       int k,a,p;
       cin>>k;
       int arr[k+1];

       for(int j=0;j<k;j++)
       {
           cin>>arr[j];
       }
       for(int j=0;j<k;j++)
       {
           if(v>arr[j])
           {
               sum++;
               frr[c]=i+1;
               c++;
               break;
           }
       }

   }


   cout<<sum<<endl;

   for(int i=0;i<c;i++)
   {
       cout<<frr[i]<<" ";
   }


}




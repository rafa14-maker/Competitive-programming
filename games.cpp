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

   int n;
   cin>>n;

   int arr[n+1],frr[n+1];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i]>>frr[i];
   }
   int sum=0;

   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr[i]==frr[j])
           {
               sum++;
           }
       }
   }
   cout<<sum<<endl;
}




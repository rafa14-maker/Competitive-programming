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
   int n,k;
   cin>>n>>k;

   int arr[n+5];

   for(int i=1;i<=n;i++)arr[i]=i;

  // for(int i=1;i<=n;i++)cout<<arr[i]<<" ";


   if(k>=n)
   {
       cout<<-1<<endl;
       return 0;
   }

   int p=n-k;

   for(int i=p;i>=1;i-=2)
   {
       if(i-1>0){
      swap(arr[i],arr[i-1]);}
   }

   for(int i=1;i<=n;i++)cout<<arr[i]<<" ";


}



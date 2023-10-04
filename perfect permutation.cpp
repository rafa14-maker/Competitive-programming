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

   if(n%2==1)
   {
       cout<<-1<<endl;
       return 0;
   }
   int arr[n+1];

   for(int i=1;i<=n;i++)
   {
       arr[i]=i;
   }
   for(int i=1;i<=n;i+=2)
   {
       swap(arr[i],arr[i+1]);
   }
    for(int i=1;i<=n;i++)
   {
       cout<<arr[i]<<" ";
   }

}




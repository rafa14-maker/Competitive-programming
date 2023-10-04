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

   string arr;
   int a,flag=-1;
   cin>>arr;
     a=arr.size();

   for(int i=0;i<arr.size();i++)
   {

       if(arr[i]%2==0&&arr[i]<arr[a-1])
       {
           flag=i;
           break;
       }
       else if(arr[i]%2==0&&arr[i]>arr[a-1])
       {
           flag=i;
       }
   }

   if(flag==-1)cout<<-1<<endl;
   else
   {
       swap(arr[flag],arr[a-1]);
       cout<<arr<<endl;
   }


}




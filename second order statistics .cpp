
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

   int arr[n+5];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);

   int p=arr[0];
   //cout<<p<<endl;

   if(n==1)
   {
       cout<<"NO"<<endl;
   }
   else
   {
       int counter=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]>p)
           {
               cout<<arr[i]<<endl;
               counter++;
               break;
           }
       }
       if(counter==0)
       {
           cout<<"NO"<<endl;

       }
   }

}



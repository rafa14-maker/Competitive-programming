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


   long long n,m;

   cin>>n>>m;

   long long arr[m];

   for(int i=0;i<m;i++)
   {
       cin>>arr[i];
   }

   sort(arr,arr+m);

   int counter=0,k=1;

   for(int i=1;i<m;i++)
   {
       if(arr[i]==(arr[i-1]+1))
       {
           k++;
           if(k>2)
           {
               counter++;
               break;
           }
       }
       else
       {
           k=1;
       }
   }

   if(arr[0]==1||arr[m-1]==n)
   {
        cout<<"NO"<<endl;
   }

  else if(counter==0)
   {
       cout<<"YES"<<endl;
   }
   else
   {
       cout<<"NO"<<endl;
   }

}




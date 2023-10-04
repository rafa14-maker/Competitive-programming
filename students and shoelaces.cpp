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

   int n,m;
   cin>>m>>n;

   int arr[n+5][2];

   for(int i=0;i<n;i++)
   {
       cin>>arr[i][0]>>arr[i][1];
   }

   int counter=0,found;

  while(m>0)
   {
       found=0;
       for(int i=0;i<n;i++)
       {
           int flag=0;
          // if(arr[i][0]!=0)
           {

               for(int j=0;j<n;j++)
               {
                   if(i!=j&&(arr[i][0]==arr[j][0]||arr[i][0]==arr[j][1]))
                   {
                       flag++;
                       break;
                   }
               }
           }
           if(flag==0)
           {
               found++;
               arr[i][0]=0;
               m--;
           }
           else
           {
                 int flag=0;
               for(int j=0;j<n;j++)
               {
                 //  if(arr[i][1]!=0){
                   if(i!=j&&(arr[i][1]==arr[j][0]||arr[i][1]==arr[j][1]))
                   {
                       flag++;
                       break;
                   }
               }

               if(flag==0)
               {
                   found++;
                   arr[i][1]=0;
                   m--;
               }
           }
       }
       if(found==0)
       {
           break;
       }
       counter++;
       for(int i=0;i<n;i++)
       {
           if(arr[i][0]==0)arr[i][1]=0;
           if(arr[i][1]==0)arr[i][0]=0;
       }
   }
   cout<<counter<<endl;
}




#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,m;

   scanf("%d%d",&n,&m);

   int arr[n];

   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }

   while(m--)
   {
  k=0;
       int counter=0;
       for(i=0;i<n;i++)
       {
           if(k==0&&arr[i]!=0)
           {
               k=arr[i];
           }
           if(arr[i]!=0){
          k=min(k,arr[i]) ;
          counter++;}
       }
       if(counter==0)
       {
           printf("0\n");
       }
       else
       {
           printf("%d\n",k);
           for(i=0;i<n;i++)
           {
               if(arr[i]!=0)
               {
                   arr[i]-=k;
               }
               if(arr[i]<0)
               {
                   arr[i]=0;
               }
           }
       }

   }
}

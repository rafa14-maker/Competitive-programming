#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,m,p=0,i,k=0,j,sum=1,l,counter=0,b,c;
   while(1==1)
   {
    cin>>n;
    if(n==0)
    {
        return 0;
    }
    cin>>m;
    if(m==0)
    {
        return 0;
    }

    b=m;
    int arr[p],frr[k];

   for(i=2;i<=n;i++)
   {
       arr[p]=i;
       p++;
   }

   for(i=2;i<=m;i++)
   {
      while(m%i==0)
      {
          frr[k]=i;
          k++;
          m/=i;
      }
   }

   for(i=0;i<p;i++)
   {
       for(j=0;j<k;j++)
       {
           if(arr[i]==frr[j])
           {
             counter++;
           }
       }
   }


   if(counter==k)
   {
       printf("%lld divides %lld!\n",b,n);
   }
   else
   {
       printf("%lld does not divide %lld!\n",b,n);
   }
   }

   return 0;
}

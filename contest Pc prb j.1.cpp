#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j;
    cin>>n>>m;

    int arr[n],frr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        for(i=0;i<n;i++)
    {
    frr[i]=arr[i];
    }


    sort(frr,frr+n);

    j=0;

   int counter=0;

   for(i=0;i<n;i++)
   {
       if(frr[i]!=j)
       {
           counter++;
       }
       j=frr[i];
   }

   if(counter>=m)
   {
       cout<<"YES"<<endl;

   }
   else
   {
       cout<<"NO"<<endl;
       return 0;
   }



   j=0;

   for(i=0;i<n,m>0;i++)
   {
       if(arr[i]!=j)
       {
           cout<<i+1<<" ";
           m--;
       }
       j=arr[i];
   }

   cout<<endl;

   return 0;
}

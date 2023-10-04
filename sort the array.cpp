#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a=-1,b=-1;
    cin>>n;
    int arr[n+2],frr[n+2];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }

  sort(frr,frr+n);
   int counter=0;

   for(int i=0;i<n;i++)
   {
       if(arr[i]!=frr[i])
       {
           counter++;
       }
   }
   if(counter==0)
   {
       printf("yes\n1 1\n");
       return 0;
   }

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=frr[i])
        {
            if(a==-1)a=i;
            b=i;
        }
    }
    reverse(arr+a,arr+b+1);
    counter=0;
      for(int i=0;i<n;i++)
   {
       if(arr[i]!=frr[i])
       {
           counter++;
       }
   }
   if(counter==0)
   {
       printf("yes\n%d %d\n",a+1,b+1);
   }
   else
   {
       printf("no\n");
   }


}

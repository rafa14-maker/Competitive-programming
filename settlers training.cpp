#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

   // for(int i=0;i<n;i++)cout<<arr[i]<<" ";

    int counter=0,found=0;

   while(1==1)
   {
     found=0;

       for(int i=0;i<n;i++)
       {
           if(arr[i]!=arr[i+1]&&arr[i]<k)
           {
               arr[i]++;
               found++;
           }
       }
     //  cout<<found<<" ";
       if(found==0)
       {
           break;
       }
       else
       {
           counter++;
       }
   }

    cout<<counter<<endl;
}

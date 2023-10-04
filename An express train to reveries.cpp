#include<bits/stdc++.h>
using namespace std;

void go(int arr[],int frr[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=frr[i])k++;
    }
    if(k==1)
    {
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        exit(0);
    }
}

int main()
{
    int n;
    cin>>n;
        int cum[n+5]={0};
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],cum[arr[i]]++;
    for(int i=0;i<n;i++)cin>>frr[i];
   int t=0;
   for(int i=1;i<=n;i++)if(cum[i]==0)t=i;
   for(int i=0;i<n;i++)
   {
       if(cum[arr[i]]==2)
       {
           swap(arr[i],t);
           go(arr,frr,n);
           swap(arr[i],t);
       }
   }
}

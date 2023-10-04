#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+2];
        int frr[n+2];
        for(int i=1;i<=n;i++)frr[i]=0;

        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
            frr[arr[i]]++;
        }
        sort(arr,arr+n);
           int m=0,p;
       for(int i=1;i<=n;i++)
       {
           if(m<frr[i])
           {
               m=frr[i];
               p=i;
           }
       }

       int counter=1;

       for(int i=p+1;i<=n;i++)
       {
         if(abs(arr[i]-arr[p])<=1)
         {
             counter++;
         }
         else
         {
             break;
         }
       }
        for(int i=p-1;i>=0;i--)
       {
         if(abs(arr[i]-arr[p])<=1)
         {
             counter++;
         }
         else
         {
             break;
         }
       }
        cout<<counter<<" "<<m<<" "<<arr[p]<<endl;

    }
}

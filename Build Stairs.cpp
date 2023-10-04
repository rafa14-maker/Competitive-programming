#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

     for(int i=0;i<n-1;i++)
     {
         if(arr[i]==arr[i+1]+1)
         {
             arr[i]=arr[i]-1;
         }
         else if(arr[i]>arr[i+1]+1)
         {
             cout<<"No"<<endl;
             return 0;
         }
     }

     for(int i=0;i<n-1;i++)
     {
         if(arr[i]>arr[i+1])
         {cout<<"No"<<endl;
         return 0;}
     }

    cout<<"Yes"<<endl;
}

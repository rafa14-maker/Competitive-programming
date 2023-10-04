#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int frr[m+5];
    for(int i=0;i<m;i++)cin>>frr[i];

    int sum=0;

    for(int a=0;a<m;a++)
    {
        int i,j;
        for(i=0;i<n;i++)
        {
            if(arr[i]==frr[a])
            {
              //  sum+=arr[i];
                 swap(arr[0],arr[i]);
                 break;
            }
            else sum+=arr[i];
        }
        if(a+1<m){
        for(j=0;j<=i;j++)
        {
            if(arr[j]==frr[a+1])
            {
                swap(arr[j],arr[1]);
            }
        }
        }
     //   cout<<sum<<endl;
     //   for(int i=0;i<n;i++)cout<<arr[i]<<" ";
     //   cout<<endl;

    }
cout<<sum<<endl;

  }

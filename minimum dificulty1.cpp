#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;

    for(int i=1;i<n-1;i++)
    {int k=0;
       for(int j=0;j<n-1;j++)
       {
           if(j!=i)
           {
               if(j+1==i)k=max(k,arr[j+2]-arr[j]);
               else
               k=max(k,arr[j+1]-arr[j]);
           }
       }

       if(sum==0)sum=k;
       else sum=min(sum,k);
    }
    cout<<sum<<endl;
}


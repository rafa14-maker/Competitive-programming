#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,m=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {cin>>arr[i];
  if(arr[i]>=0) arr[i]=-arr[i]-1;
    if(arr[i]<m){m=arr[i];k=i;}
    }
    if(n%2)arr[k]=-arr[k]-1;

    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

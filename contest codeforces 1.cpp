#include<bits/stdc++.h>
using namespace std;

int main()
{
   int i,n,a,k=0;

   int arr[n+1];

  for(i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  for(i=0;i<n;i++)
  {
      if(arr[i-1]==arr[i+1])
      {
          arr[i]=0;
      }
  }
   for(i=0;i<n;i++)
  {
      cout<<arr[i];3
  }

    return 0;
}

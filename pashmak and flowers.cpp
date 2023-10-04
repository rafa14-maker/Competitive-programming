#include<bits/stdc++.h>
using namespace std;

int main()
{
     long long a,b,c,n,a1=0,b1=0,i;

    long long arr[200005];


    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    a=arr[0];
    b=arr[n-1];


    for(i=0;i<n;i++)
    {
      if(arr[i]==a)
      {
          a1++;
      }
      else
      {
          break;
      }
    }

    for(i=n-1;i>=0;i--)
    {
      if(arr[i]==b)
      {
          b1++;
      }
      else
      {
          break;
      }
    }
    cout<<b-a<<" ";

    if(arr[0]==arr[n-1])
    {
        cout<<n*(n-1)/2<<endl;
    }
    else
    {
        cout<<a1*b1<<endl;
    }

}

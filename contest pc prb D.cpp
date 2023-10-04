#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,counter=1,founder=0,m=0;

    cin>>n;

    int arr[n];

 for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    a= arr[0];

    for(i=0;i<n;i++)
    {
       if(arr[i]>a)
       {
           counter++;
           a=arr[i];
       }

    }

    a=arr[0];

    for(i=0;i<n;i++)
    {
      if(a==arr[i])
      {
          founder++;
          m=max(m,founder);
      }
      else
      {
          founder=0;
          a=arr[i];
      }
    }


    cout<<m<<" "<<counter<<endl;

}

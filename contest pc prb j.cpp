#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,b,n,m;

    cin>>n>>m;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    int k=arr[0],counter=1;

    for(i=1;i<n;i++)
    {
        if(arr[i]!=k)
        {
            counter++;
        }
        k=arr[i];
    }

    if(counter<m)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        k=arr[0];
        for(i=0;i<n,m>0;i++)
        {
          if(arr[i]!=k)
          {
              cout<<i<<" ";
              m--;
          }
          k=arr[i];

        }
        cout<<endl;
    }

}

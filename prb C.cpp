#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,k,r,l,sum;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>k;

    for(i=0;i<k;i++)
    {
       sum=0;
       cin>>l>>r;

       for(j=l;j<=r;j++)
       {
           sum+=arr[j];
       }

       cout<<sum<<endl;
    }
}

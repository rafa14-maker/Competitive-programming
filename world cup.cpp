#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];

    int p=0,l=0,r=n-1;

    int i=0;long long counter=0;

    while(1==1)
    {

        if(arr[i]<=counter)break;

        counter++;

        if(p%2==0)i++;
        else i--;

       if(i<0)
       {
           i=l+1;
           p++;
       }
       else if(i>=n)
       {
           i=r-1;
           p++;
       }
    }
  // for(int i=0;i<n;i++)cout<<arr[i]<<" ";cout<<endl;
  cout<<i+1<<endl;
}

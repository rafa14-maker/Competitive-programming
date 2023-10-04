#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l;
    cin>>n>>l;
    int arr[n+5];
    long long counter=1e8,sum=0,p=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=(i+l)-1;
        sum+=arr[i];
    }
//cout<<sum<<endl;

//for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<"\n";

    for(int i=1;i<=n;i++)
    {
     if(counter>abs(sum-(sum-arr[i])))
     {
         p=sum-arr[i];
         counter =abs( sum - (sum-arr[i]));
     }
    }
   cout<<p<<endl;
}

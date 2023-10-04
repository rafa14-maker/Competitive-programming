#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // k=min(k,arr[i]);
    }
    long long k=arr[0];
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
       if(arr[i]%k!=0)
       {
           long long p=arr[i]%k;
           long long a=p,b=k;
           while(b%a!=0)
           {
               b%=a;
               if(a>b)swap(a,b);
           }
           k=min(b,a);
       }
    }

    cout<<k;
}

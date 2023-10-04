#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100005];

long long check(long long k)
{
    k-=arr[0];
    if(k<0)return -1;
    for(int i=1;i<n;i++)
    {
        k+=(arr[i-1]-arr[i]);
        if(k<0)return -1;
    }
     return 1;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];

    long long l=0,r=1e18;

    long long counter=1e18;

     while(l<=r)
     {
        long long mid=(l+r)/2;
         if(check(mid)==1)
         {
             counter=min(counter,mid);
             r=mid-1;
         }
         else
         {
             l=mid+1;
         }
     }
     cout<<counter<<endl;
}

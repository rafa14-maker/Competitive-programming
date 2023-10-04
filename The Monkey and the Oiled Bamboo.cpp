#include<bits/stdc++.h>
using namespace std;

bool check(int arr[],int n,int k)
{
    for(int i=1;i<=n;i++)
    {
        if(arr[i]-arr[i-1]==k)k--;
        else if(arr[i]-arr[i-1]>k)return false;
    }
    return true;
}

int main()
{
    int q;
    cin>>q;
    int counter=0;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        arr[0]=0;
        for(int i=1;i<=n;i++)cin>>arr[i];

        int l=arr[1],r=1e6+5,mn=1e6+5;

        while(l<=r)
        {
            int mid=(l+r)/2;
            if(l==r)
            {
               if(check(arr,n,mid)) mn=min(mid,mn);
                break;
            }
            if(check(arr,n,mid))
            {
                mn=min(mn,mid);
                r=mid-1;
            }
            else l=mid+1;
        }
         if(n==1)cout<<"Case "<<++counter<<": "<<mn<<endl;
         else  cout<<"Case "<<++counter<<": "<<mn<<endl;
    }
}

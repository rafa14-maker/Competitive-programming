#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n;

    int arr[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>k;
    while(k--)
    {
        int a,e=0;
        cin>>a;
        int l=0,r=n-1;

        while(l<=r)
        {
            int mid=(l+r)/2;
            if(arr[mid]>a)r=mid-1;
            else l=mid+1;
        }
        cout<<r+1<<endl;
    }
}

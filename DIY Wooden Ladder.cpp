#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int k=-1,l=-1,p=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>k)
            {
                k=arr[i];
                p=i;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]>l&&i!=p)
            {
                l=arr[i];
            }
        }
       // cout<<k<<" "<<l<<endl;
        int c=min(k-1,l-1);
        cout<<min(c,n-2)<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        long long arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int k;
        cin>>k;
        long long p=arr[k-1];
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==p)
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}

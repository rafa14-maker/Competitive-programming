#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==(arr[i+1]+1))swap(arr[i],arr[i+1]);
        }
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=((i+1)*arr[i]);
        }
        cout<<sum<<endl;
    }
}

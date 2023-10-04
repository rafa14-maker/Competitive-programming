#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int arr[3]={0},ans=0;
        int a;
        cin>>a;
        while(a--)
        {
            long long b;
            cin>>b;
            arr[b%3]++;
        }
        ans+=arr[0];
        if(arr[1]>arr[2])
        {
            arr[1]-=arr[2];
            ans+=arr[2]+arr[1]/3;
        }
        else
        {
              arr[2]-=arr[1];
            ans+=arr[1]+arr[2]/3;
        }
        cout<<ans<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[3],d;
    cin>>arr[0]>>arr[1]>>arr[2]>>d;
    sort(arr,arr+3);

    long long ans=0;

    if((arr[1]-arr[0])<d)
    {
        ans+=d-(arr[1]-arr[0]);
    }
    if((arr[2]-arr[1])<d)
    {
        ans+=d-(arr[2]-arr[1]);
    }

    cout<<ans<<endl;
}

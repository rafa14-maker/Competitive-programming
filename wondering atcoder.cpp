#include<bits/stdc++.h>
using namespace std;

using ll=long long;

int main()
{
    ll n;
    cin>>n;
    int arr[n+5];
    //for(int i=0;i<n;i++)cin>>arr[i];
    ll sum=0,maxpref=0,update=0,prefsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        update=max(update,sum);
        maxpref=max(maxpref,prefsum+update);
        prefsum+=sum;
    }
    cout<<maxpref<<endl;
}

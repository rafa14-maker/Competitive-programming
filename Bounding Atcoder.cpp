#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    long long sum=0,counter=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<=k)counter++;
    }
    cout<<counter+1<<endl;
}

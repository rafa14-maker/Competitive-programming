#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=1000000;

    for(int i=0;i<n;i++)
    {
        sum=min(sum,(arr[i+1]-arr[i-1]));
    }
    cout<<sum<<endl;
}

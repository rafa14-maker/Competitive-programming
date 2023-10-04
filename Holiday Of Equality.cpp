#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],m=max(m,arr[i]);

   int sum=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=m)
        {
            sum+=m-arr[i];
        }
    }
    cout<<sum<<endl;
}

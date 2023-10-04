#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long  arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long frr[n+5];
    for(int i=0;i<n-1;i++)
    {
       cin>>frr[i];
    }
    sort(frr,frr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=frr[i])
        {
            cout<<arr[i]<<endl;
            break;
        }
    }
    long long krr[n+5];
    for(int i=0;i<n-2;i++)cin>>krr[i];
    sort(krr,krr+n);

    for(int i=0;i<n-1;i++)
    {
        if(krr[i]!=frr[i])
        {
            cout<<frr[i]<<endl;
            break;
        }
    }

   // for(int i=0;i<n;i++)cout<<arr[i]<<" ";
   // cout<<endl;
   // for(int i=0;i<n-1;i++)cout<<frr[i]<<" ";
   // cout<<endl;
   // for(int i=0;i<n-2;i++)cout<<krr[i]<<" ";

}

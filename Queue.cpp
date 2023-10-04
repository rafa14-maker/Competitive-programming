#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    long long counter=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<counter)
        {
            flag++;
        }
      else  counter+=arr[i];
    }
    cout<<n-flag<<endl;
}

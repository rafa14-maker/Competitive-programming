#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=1e6;
    int counter=0;
  //  cout<<k<<endl;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++)
    {
     //   cout<<k-arr[i]<<
        arr[i]=min(arr[i]-1,k-arr[i]);
        counter=max(arr[i],counter);
    }
    cout<<counter<<endl;
}

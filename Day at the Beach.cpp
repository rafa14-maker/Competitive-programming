#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,counter=0;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i],frr[i]=arr[i];
    sort(frr,frr+n);
    for(int i=0;i<n;i++)
    {
      k+=arr[i]-frr[i];
      if(k==0)counter++;
    }
    cout<<counter<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n&&m>0;i++)
    {
        if(arr[i]<0){
        sum-=arr[i];m--;}
    }
  cout<<sum<<endl;
}

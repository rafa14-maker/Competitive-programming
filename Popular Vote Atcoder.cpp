#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double m;
    cin>>n>>m;
    int arr[n+5];
    int sum=0;
    for(int i=0;i<n;i++)cin>>arr[i],sum+=arr[i];
    double k=1/(m*4);
    k=sum*k;
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int flag=0;
    for(int i=0;i<m;i++)
    {
       if(arr[i]<k)flag++;
    }
    if(flag==0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

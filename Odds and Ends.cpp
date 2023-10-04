#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n%2==0)cout<<"NO"<<endl;
    else if(arr[0]%2==0||arr[n-1]%2==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

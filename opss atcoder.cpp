#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int m=1e8;
   int a=k-1;
   if((n-1)%a==0)cout<<(n-1)/a<<endl;
   else cout<<((n-1)/a)+1<<endl;
}


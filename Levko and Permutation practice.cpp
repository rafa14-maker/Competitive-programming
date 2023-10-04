#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    if(n==1&&k==1||n<=k)
    {
        cout<<-1<<endl;
        return 0;
    }

    int arr[n+5];
    for(int i=1;i<=n;i++)arr[i]=i;
    for(int i=k+2;i<=n;i+=2)
    {
        if(i+1<=n)swap(arr[i],arr[i+1]);
    }
   if(k!=n-1) if(arr[n]==n)swap(arr[n],arr[1]);
    for(int i=1;i<=n;i++)cout<<arr[i]<<" ";cout<<endl;
}

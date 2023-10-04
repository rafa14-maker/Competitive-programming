#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i],frr[i]=arr[i];
    sort(frr,frr+n);
    int a=0,k,b;
    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            a=i;
            k=arr[i];
            break;
        }
    }
    if(a==0)
    {
        cout<<"0 0"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]==a)
        {
            b=i;
            break;
        }
    }
    for(int i=a,j=b;i<j;i++,j--)
    {
        swap(arr[i],arr[j]);
    }

    for(int i=1;i<=n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"0 0"<<endl;
            return 0;
        }
    }
    cout<<a<<" "<<b<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5],frr[n+5];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        frr[i]=arr[i];
    }
    arr[0]=0;
    for(int i=2; i<=n; i++)
    {
        arr[i]+=arr[i-1];
    }
    //for(int i=1;i<=n;i++)cout<<arr[i]<<" ";

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int sum=arr[r]-arr[l-1];
        if(l!=r)
            cout<<(sum-(sum%10))/10<<endl;
        if(l==r)
        {
            if(frr[l]>9)
                cout<<1<<endl;
            else
                cout<<0<<endl;
        }
    }
}

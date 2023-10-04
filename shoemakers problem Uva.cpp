#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;

    int arr[n+5],frr[n+5],krr[n+5];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i]>>frr[i];
        krr[i]=i+1;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]*frr[j]>arr[j]*frr[i])
            {
                swap(arr[i],arr[j]);
                swap(frr[i],frr[j]);
                swap(krr[i],krr[j]);
            }
              if(arr[i]*frr[j]==arr[j]*frr[i])
            {
               int a=min(krr[i],krr[j]);
                int b=max(krr[i],krr[j]);
                krr[i]=a;
                krr[j]=b;
            }
        }
    }
    cout<<krr[n-1];
    for(int i=n-2;i>=0;i--)cout<<" "<<krr[i];cout<<endl;

}

int main()
{
    int q;
    cin>>q;
    while(q--){solve();if(q)cout<<endl;}
}

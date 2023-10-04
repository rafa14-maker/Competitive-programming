#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,l=0,b=0;

    cin>>n;

    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
       for(i=0;i<n;i++)
    {
        l=max(l,arr[i]);
    }

    for(i=0;i<n;i++)
    {
        b+=l-arr[i];
            }


            cout<<b<<endl;
}

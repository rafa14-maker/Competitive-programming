#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+5],b[n+5],c[n+5];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n-1;i++)cin>>c[i];

    int sum=0;

    for(int i=0;i<n;i++)
    {
        int k=b[a[i]-1];
        sum+=k;
        if(i!=0)
        {
            int l=a[i-1];
            int r=a[i];
            if(l<r&&abs(l-r)==1)
            {
                sum+=c[l-1];
            }
        }
    }
    cout<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define max 1000000007

int main()
{
    int i,j,k,l,r,sum,t,n;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>l>>r>>k;
        while(k--)
        {
            sum=0;
            for(i=l-1;i<r;i++)
            {
             sum+=arr[i];
            }
            for(i=l-1;i<r;i++)
            {
                arr[i]+=sum;
                arr[i]=arr[i]%max;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<arr[n-1]<<endl;
}

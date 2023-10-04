#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    int m=0,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m=max(arr[i],m);
        sum+=arr[i];
    }
    int k=m;
    while(1==1)
    {
        int p=k;
        p*=n;
        for(int i=0;i<n;i++)
        {
            p-=arr[i];
        }
        if(p>sum)
        {
            cout<<k<<endl;
            return 0;
        }
        k++;
    }
}

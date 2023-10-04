#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k,x;
    cin>>k>>x;
    int arr[n+5];
    for(int i=1;i<=n;i++)cin>>arr[i];

    int sum=0;

    for(int i=1;i<=n;i++)
    {
        int p=arr[i];
        for(int j=1;j<=k;j+=p)
        {
            sum++;
        }
    }
    cout<<sum+x<<endl;

}

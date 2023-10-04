#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+n+5]={0};
    for(int i=0;i<n;i++)cin>>arr[i];

    for(int i=0,j=n;i<n;i++,j++)arr[j]=arr[i];

    int counter=0,sum=0;
    for(int i=0;i<=n+n;i++)
    {
        if(arr[i]==1)counter++;
        else
        {
            sum=max(counter,sum);
            counter=0;
        }
    }
    if(counter>0)sum=max(sum,counter);
    cout<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1||arr[i]>k)break;
        else
        {
            counter++;
            arr[i]=-1;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==-1||arr[i]>k)break;
        else
        {
            counter++;
            arr[i]=-1;
        }
    }
    cout<<counter<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]<0&&m>0)
        {
            arr[i]*=(-1);
            m--;
        }
        else
        {
            break;
        }
    }

    sort(arr,arr+n);
    if(m>0&&m%2==1){
    arr[0]*=(-1);}

    for(int i=0;i<n;i++)
    {

        sum+=arr[i];
    }
    cout<<sum<<endl;
}

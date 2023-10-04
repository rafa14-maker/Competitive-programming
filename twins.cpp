#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,found=0,counter=0;
    cin>>n;
    int arr[n+2];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);

    for(int i=n-1;i>=0;i--)
    {
        if(found>sum)
        {
            break;
        }
        else
        {
            counter++;
            found+=arr[i];
            sum-=arr[i];
        }
    }
    cout<<counter<<" "<<endl;

}

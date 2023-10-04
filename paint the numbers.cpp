#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];

    for(int i=0;i<n;i++)cin>>arr[i];

    int counter=0;

    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0){
        int sum=0;
        int k=arr[i];
        for(int j=i;j<n;j++)
        {
            if(arr[j]%k==0&&arr[j]!=0)
            {
                sum++;
                arr[j]=0;
            }
        }
        if(sum!=0)counter++;
        }
    }
    cout<<counter<<endl;
}

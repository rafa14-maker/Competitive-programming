#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {

                arr[i]=-1;
            }
        }

            }
    sort(arr,arr+n);

    for(i=1;i<n-1;i++)
    {
        if(arr[i]-arr[i-1]==1&&arr[i+1]-arr[i]==1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

}

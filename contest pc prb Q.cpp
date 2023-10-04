#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,counter=0,m=0,i;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    k=arr[0];

    for(i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            counter++;
            m=max(m,counter);
        }
        else if(arr[i]!=k)
        {
            counter=0;
        }

        k=arr[i];
    }

    cout<<m<<endl;
}

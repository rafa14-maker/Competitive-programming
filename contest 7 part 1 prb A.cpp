#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,counter=0;

    cin>>n;

    int arr[n],frr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i]>>frr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==frr[j])
            {
                counter++;
            }
        }
    }

    cout<<counter<<endl;

    return 0;
}

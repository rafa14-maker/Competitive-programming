#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i+1]==0&&arr[i]==1||arr[i+1]==1&&arr[i]==0)
        {
            arr[i]=-1;
            arr[i+1]=-1;
        }
    }



    return 0;
}


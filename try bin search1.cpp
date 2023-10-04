#include<bits/stdc++.h>
using namespace std;

int bin_search(int arr[],int high,int low,int key)
{
    if(low<=high)
    {
        int mid=(high+low)/2;

        if(key==arr[mid])
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            return bin_search(arr,mid-1,low,key);
        }
        else if(arr[mid]<key)
        {
            return bin_search(arr,high,mid+1,key);
        }
    }
    return -1;
}


int main()
{
    int i,a,n,k;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cin>>k;

    a=bin_search(arr,n-1,0,k);

    if(a>=0)
    {
        cout<<a<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}

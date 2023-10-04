#include<iostream>
using namespace std;

void marge_opp(int arr[],int l,int m,int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=arr[m+j+1];
    }

    i=0,j=0,k=l;

    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }
}

void marge_sort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;

        marge_sort(arr,l,m);
        marge_sort(arr,m+1,r);

        marge_opp(arr,l,m,r);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    marge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}

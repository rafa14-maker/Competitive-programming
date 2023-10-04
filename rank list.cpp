#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a,k;
    int arr[55][2];

    cin>>n>>k;

    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][0]>arr[j][0])
            {
                int tmp=arr[i][0];
                arr[i][0]=arr[j][0];
                arr[j][0]=tmp;
                 tmp=arr[i][1];
                arr[i][1]=arr[j][1];
                arr[j][1]=tmp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][0]==arr[j][0])
            {
                if(arr[i][1]<arr[j][1])
                {
                    int tmp=arr[i][1];
                    arr[i][1]=arr[j][1];
                    arr[j][1]=tmp;
                }
            }
        }
    }

    int frr[55],p=0;

for(i=0;i<n;i++)
{
    frr[i]=0;
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
       if(arr[i][0]==arr[j][0]&&arr[i][1]==arr[j][1])
       {
           frr[p]++;
       }
    }
    p++;
}
cout<<frr[k-1]<<endl;
}

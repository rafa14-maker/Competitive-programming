#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,b,m=1,k,l=1,counter=1,founder=1,i;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);

    b=arr[0];

    for(i=1;i<n;i++)
    {
        if(arr[i]!=b)
        {
            counter++;
            founder=1;
        }
        if(arr[i]==b)
        {
            founder++;
            m=max(m,founder);
        }
        b=arr[i];
    }

   cout<<m<<" "<<counter<<endl;


    }



#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,counter,m=0,j;

    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
        counter=0;

        for(j=0;j<n;j++)
        {
            if(arr[i]-arr[j]==1)
            {
                counter++;
            }
            else if(arr[i]-arr[j]==1)
            {
               counter++;
            }
            if(arr[i]==arr[j])
            {
               counter++;
            }

        }
        m=max(counter,m);
    }

    cout<<m<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,m,counter=0,j;

    cin>>n>>m;

    int arr[n];

    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j]&&arr[j]!=0)
            {
                arr[j]=0;
            }
        }
    }
        for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            counter++;
        }

    }

    if(counter>=m)
    {
        cout<<"YES"<<endl;

       for(i=0;i<n;i++)
       {
           if(arr[i]!=0&&m>0)
           {
               cout<<i+1<<" ";
               m--;
           }
       }

    }
    else{
        cout<<"NO"<<endl;
    }
}

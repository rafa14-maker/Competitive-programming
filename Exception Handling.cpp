#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m=0,k=0,u=0;

     for(int i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
            k=i;
        }
    }
         for(int i=0;i<n;i++)
    {
        if(arr[i]>u&&i!=k)
        {
            u=arr[i];
        }
    }

for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
          cout<<m<<endl;
        }
        else
        {
            cout<<u<<endl;
        }
    }

}

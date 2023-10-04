//Dont copy my code ^________________________________^

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100000],i,n,p=0,c=0;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n;i++)
    {
       if(arr[i]==-1&&p<=0)
       {
           c++;
       }
       if(arr[i]>=1)
       {
           p+=arr[i];
       }
       if(arr[i]==-1&&p>0)
       {
           p+=arr[i];
       }
    }

    cout<<c<<endl;
}

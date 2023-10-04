#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int flag=1;
    int m=arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]<m)
       {
           flag++;
           m=arr[i];
       }
    }
    cout<<flag<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
   // set<int>s;
   int counter=0;
    for(int i=1;i<n;i++)
    {
        if(i+1<n)
        {
            if(arr[i]>arr[i-1]&&arr[i]<arr[i+1])counter++;
            else if(arr[i]<arr[i-1]&&arr[i]>arr[i+1])counter++;
        }
    }
    cout<<counter<<endl;
}

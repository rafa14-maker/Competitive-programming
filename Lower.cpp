#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0,k=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
         counter++;
        }
        else
        {
            k=max(counter,k);
            counter=0;
        }
    }
    k=max(k,counter);
    cout<<k<<endl;
}

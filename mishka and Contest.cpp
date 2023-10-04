#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n+5];
    for(int i=0;i<n;i++)cin>>arr[i];
    int counter=0;
    int l=0,r=n-1;
    while(l<=r)
    {
        if(arr[l]<=k)
        {
            l++;
            counter++;
        }
        else if(arr[r]<=k)
        {
            r--;
            counter++;
        }
        else break;
    }
    cout<<counter<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int counter=0;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        int l=0,r=0;
        for(int i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])l++;
            else if(arr[i]<arr[i-1])r++;
        }
        printf("Case %d: %d %d\n",++counter,l,r);
    }
}

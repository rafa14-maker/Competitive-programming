#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int step=1e9;
        for(int i=n-1;i>=0;i--)
        {
            int r=k/arr[i];
            if(r==0)r++;
            if(k%arr[i]!=0)r++;
            step=min(r,step);
        }
        cout<<step<<endl;
    }
}

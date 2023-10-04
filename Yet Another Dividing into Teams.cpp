#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n);
        int counter=0;
        for(int i=0;i<n-1;i++)
        {
            if(abs(arr[i]-arr[i+1])==1)
            {
                counter++;
                break;
            }
        }
        if(counter==0)cout<<1<<endl;
        else cout<<2<<endl;
    }
}
